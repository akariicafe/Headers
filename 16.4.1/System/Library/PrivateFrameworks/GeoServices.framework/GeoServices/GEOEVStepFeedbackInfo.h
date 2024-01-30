@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying> {
    unsigned int _remainingBatteryCharge;
    unsigned int _remainingBatteryPercentage;
    unsigned int _remainingTravelRange;
    unsigned int _stateOfChargeDiff;
    struct { unsigned char has_remainingBatteryCharge : 1; unsigned char has_remainingBatteryPercentage : 1; unsigned char has_remainingTravelRange : 1; unsigned char has_stateOfChargeDiff : 1; } _flags;
}

@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic) BOOL hasRemainingTravelRange;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic) BOOL hasRemainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) BOOL hasStateOfChargeDiff;
@property (nonatomic) unsigned int stateOfChargeDiff;

+ (BOOL)isValid:(id)a0;

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
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
