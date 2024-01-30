@interface GEOLogMsgEventThermalPressure : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _disableMapFeatures;
    int _chargingState;
    int _collectionTrigger;
    int _navMapType;
    unsigned int _thermalPressure;
    struct { unsigned char has_chargingState : 1; unsigned char has_collectionTrigger : 1; unsigned char has_navMapType : 1; unsigned char has_thermalPressure : 1; } _flags;
}

@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (readonly, nonatomic) unsigned long long disableMapFeaturesCount;
@property (readonly, nonatomic) int *disableMapFeatures;
@property (nonatomic) BOOL hasNavMapType;
@property (nonatomic) int navMapType;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) int chargingState;

+ (BOOL)isValid:(id)a0;

- (id)disableMapFeaturesAsString:(int)a0;
- (void)addDisableMapFeatures:(int)a0;
- (int)StringAsChargingState:(id)a0;
- (id)chargingStateAsString:(int)a0;
- (int)StringAsCollectionTrigger:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)collectionTriggerAsString:(int)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsDisableMapFeatures:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)disableMapFeaturesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearDisableMapFeatures;
- (void)setDisableMapFeatures:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (int)StringAsNavMapType:(id)a0;
- (id)description;
- (id)navMapTypeAsString:(int)a0;

@end
