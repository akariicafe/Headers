@class HKCodableQuantity;

@interface HKCodableSummaryActivityRingsValue : PBCodable <NSCopying> {
    struct { unsigned char activityMoveMode : 1; unsigned char creationDate : 1; unsigned char dateData : 1; unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (nonatomic) long long activityMoveMode;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurned;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurned;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurnedGoal;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurnedGoal;
@property (readonly, nonatomic) BOOL hasAppleMoveTime;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTime;
@property (readonly, nonatomic) BOOL hasAppleMoveTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleExerciseTime;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTime;
@property (readonly, nonatomic) BOOL hasAppleExerciseTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleStandHours;
@property (retain, nonatomic) HKCodableQuantity *appleStandHours;
@property (readonly, nonatomic) BOOL hasAppleStandHoursGoal;
@property (retain, nonatomic) HKCodableQuantity *appleStandHoursGoal;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
