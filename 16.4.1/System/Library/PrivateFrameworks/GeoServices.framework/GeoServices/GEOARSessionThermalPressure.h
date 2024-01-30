@interface GEOARSessionThermalPressure : PBCodable <NSCopying> {
    double _timestamp;
    int _chargingState;
    int _collectionTrigger;
    unsigned int _thermalPressure;
    struct { unsigned char has_timestamp : 1; unsigned char has_chargingState : 1; unsigned char has_collectionTrigger : 1; unsigned char has_thermalPressure : 1; } _flags;
}

@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) int chargingState;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;

+ (BOOL)isValid:(id)a0;

- (int)StringAsChargingState:(id)a0;
- (id)chargingStateAsString:(int)a0;
- (int)StringAsCollectionTrigger:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)collectionTriggerAsString:(int)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
