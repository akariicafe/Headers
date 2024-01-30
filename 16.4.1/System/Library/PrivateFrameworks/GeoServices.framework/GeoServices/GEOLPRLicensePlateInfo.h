@class PBDataReader, NSMutableArray, GEOLPRLicensePlateStructure;

@interface GEOLPRLicensePlateInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLPRLicensePlateStructure *_licensePlateStructure;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_licensePlateStructure : 1; unsigned char read_powerTypeKeys : 1; unsigned char read_vehicleTypeKeys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *vehicleTypeKeys;
@property (retain, nonatomic) NSMutableArray *powerTypeKeys;
@property (readonly, nonatomic) BOOL hasLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *licensePlateStructure;

+ (BOOL)isValid:(id)a0;
+ (Class)powerTypeKeysType;
+ (Class)vehicleTypeKeysType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPowerTypeKeys:(id)a0;
- (void)addVehicleTypeKeys:(id)a0;
- (void)clearPowerTypeKeys;
- (void)clearVehicleTypeKeys;
- (id)powerTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)powerTypeKeysCount;
- (id)vehicleTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)vehicleTypeKeysCount;

@end
