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

+ (BOOL)isValid:(id)a0;
+ (Class)powerTypesType;
+ (Class)regionsType;
+ (Class)vehicleTypesType;

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
- (void)addRegions:(id)a0;
- (void)clearRegions;
- (unsigned long long)regionsCount;
- (void).cxx_destruct;
- (void)clearPowerTypes;
- (unsigned long long)powerTypesCount;
- (id)regionsAtIndex:(unsigned long long)a0;
- (void)clearVehicleTypes;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)a0;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)a0;
- (id)powerTypesForKey:(id)a0;
- (void)setPowerTypesValue:(id)a0 forKey:(id)a1;
- (void)setVehicleTypesValue:(id)a0 forKey:(id)a1;
- (unsigned long long)vehicleTypesCount;
- (id)vehicleTypesForKey:(id)a0;

@end
