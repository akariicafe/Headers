@interface AWDCoreRoutineTrafficConditions : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char precisionRecall : 1; unsigned char trafficDensity : 1; unsigned char predictedLocationOfInterest : 1; unsigned char vehicleConnected : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVehicleConnected;
@property (nonatomic) BOOL vehicleConnected;
@property (nonatomic) BOOL hasPredictedLocationOfInterest;
@property (nonatomic) BOOL predictedLocationOfInterest;
@property (nonatomic) BOOL hasTrafficDensity;
@property (nonatomic) int trafficDensity;
@property (nonatomic) BOOL hasPrecisionRecall;
@property (nonatomic) int precisionRecall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)trafficDensityAsString:(int)a0;
- (int)StringAsTrafficDensity:(id)a0;
- (id)precisionRecallAsString:(int)a0;
- (int)StringAsPrecisionRecall:(id)a0;

@end
