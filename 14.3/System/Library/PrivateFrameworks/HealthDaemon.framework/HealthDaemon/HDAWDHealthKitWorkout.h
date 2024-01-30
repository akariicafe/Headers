@interface HDAWDHealthKitWorkout : PBCodable <NSCopying> {
    struct { unsigned char durationMs : 1; unsigned char endDate : 1; unsigned char startDate : 1; unsigned char timestamp : 1; unsigned char totalDistance : 1; unsigned char totalEnergyBurned : 1; unsigned char totalSteps : 1; unsigned char activityType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) int activityType;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) long long durationMs;
@property (nonatomic) BOOL hasTotalEnergyBurned;
@property (nonatomic) long long totalEnergyBurned;
@property (nonatomic) BOOL hasTotalDistance;
@property (nonatomic) long long totalDistance;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasTotalSteps;
@property (nonatomic) long long totalSteps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)activityTypeAsString:(int)a0;
- (int)StringAsActivityType:(id)a0;

@end
