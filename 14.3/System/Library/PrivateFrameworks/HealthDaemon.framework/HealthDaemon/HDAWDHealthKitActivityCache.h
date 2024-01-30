@interface HDAWDHealthKitActivityCache : PBCodable <NSCopying> {
    struct { unsigned char activeHours : 1; unsigned char briskMinutes : 1; unsigned char cacheIndex : 1; unsigned char endDate : 1; unsigned char energyBurned : 1; unsigned char energyBurnedGoal : 1; unsigned char energyBurnedGoalDate : 1; unsigned char startDate : 1; unsigned char stepCount : 1; unsigned char walkingAndRunningDistance : 1; } _has;
}

@property (nonatomic) BOOL hasCacheIndex;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) long long energyBurned;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) long long briskMinutes;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) long long activeHours;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) long long stepCount;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) long long energyBurnedGoal;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) long long walkingAndRunningDistance;
@property (nonatomic) BOOL hasEnergyBurnedGoalDate;
@property (nonatomic) long long energyBurnedGoalDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
