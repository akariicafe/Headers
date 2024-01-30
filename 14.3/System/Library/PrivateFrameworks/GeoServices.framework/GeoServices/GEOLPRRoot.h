@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOLPRRoot : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableDictionary *_powerTypes;
    NSMutableArray *_regions;
    NSMutableDictionary *_vehicleTypes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_powerTypes : 1; unsigned char read_regions : 1; unsigned char read_vehicleTypes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableDictionary *powerTypes;
@property (retain, nonatomic) NSMutableDictionary *vehicleTypes;

+ (Class)powerTypesType;
+ (Class)regionsType;
+ (Class)vehicleTypesType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)regionsCount;
- (id)initWithData:(id)a0;
- (void)addRegions:(id)a0;
- (void)clearRegions;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (unsigned long long)powerTypesCount;
- (void)clearPowerTypes;
- (unsigned long long)vehicleTypesCount;
- (void)clearVehicleTypes;
- (id)powerTypesForKey:(id)a0;
- (void)setPowerTypesValue:(id)a0 forKey:(id)a1;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)a0;
- (void)setVehicleTypesValue:(id)a0 forKey:(id)a1;
- (id)vehicleTypesForKey:(id)a0;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)a0;

@end
