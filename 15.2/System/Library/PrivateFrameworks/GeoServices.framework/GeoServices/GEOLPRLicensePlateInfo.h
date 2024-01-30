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

+ (Class)vehicleTypeKeysType;
+ (Class)powerTypeKeysType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)vehicleTypeKeysCount;
- (void)clearVehicleTypeKeys;
- (unsigned long long)powerTypeKeysCount;
- (void)clearPowerTypeKeys;
- (void)addVehicleTypeKeys:(id)a0;
- (void)addPowerTypeKeys:(id)a0;
- (id)vehicleTypeKeysAtIndex:(unsigned long long)a0;
- (id)powerTypeKeysAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
