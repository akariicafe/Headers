@class HKCodableDateComponents, HKCodableQuantity;

@interface HKCodableActivitySummaryEntry : PBCodable <NSCopying> {
    struct { unsigned char activityMoveMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGregorianDateComponents;
@property (retain, nonatomic) HKCodableDateComponents *gregorianDateComponents;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (nonatomic) long long activityMoveMode;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurned;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurned;
@property (readonly, nonatomic) BOOL hasAppleMoveTime;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTime;
@property (readonly, nonatomic) BOOL hasAppleExerciseTime;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTime;
@property (readonly, nonatomic) BOOL hasAppleStandHours;
@property (retain, nonatomic) HKCodableQuantity *appleStandHours;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurnedGoal;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurnedGoal;
@property (readonly, nonatomic) BOOL hasAppleMoveTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleExerciseTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleStandHoursGoal;
@property (retain, nonatomic) HKCodableQuantity *appleStandHoursGoal;

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
