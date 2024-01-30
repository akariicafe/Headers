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

+ (Class)regionsType;
+ (Class)powerTypesType;
+ (Class)vehicleTypesType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (unsigned long long)powerTypesCount;
- (void)clearPowerTypes;
- (unsigned long long)vehicleTypesCount;
- (void)clearVehicleTypes;
- (void)setPowerTypesValue:(id)a0 forKey:(id)a1;
- (id)powerTypesForKey:(id)a0;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)a0;
- (void)setVehicleTypesValue:(id)a0 forKey:(id)a1;
- (id)vehicleTypesForKey:(id)a0;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)regionsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearRegions;
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
- (void)addRegions:(id)a0;

@end
