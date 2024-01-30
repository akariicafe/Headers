@class HKQuantity, HKActivitySummary, ACHDataStoreActivityProperties;

@interface ACHActivityAwardingDataProvider : NSObject <NSCopying>

@property (readonly, nonatomic) ACHDataStoreActivityProperties *properties;
@property (nonatomic) long long lastCheckedIndexForMove;
@property (readonly, nonatomic) HKQuantity *todayMoveValue;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayMoveValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayMoveValue;
@property (readonly, nonatomic) HKQuantity *todayMoveGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveGoal;
@property (retain, nonatomic) HKQuantity *lastTodayMoveGoal;
@property (readonly, nonatomic) HKQuantity *todayMoveTimeValue;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveTimeValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayMoveTimeValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayMoveTimeValue;
@property (readonly, nonatomic) HKQuantity *todayMoveTimeGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveTimeGoal;
@property (retain, nonatomic) HKQuantity *lastTodayMoveTimeGoal;
@property (nonatomic) long long lastCheckedIndexForExercise;
@property (readonly, nonatomic) HKQuantity *todayExerciseValue;
@property (readonly, nonatomic) HKQuantity *yesterdayExerciseValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayExerciseValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayExerciseValue;
@property (readonly, nonatomic) HKQuantity *todayExerciseGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayExerciseGoal;
@property (retain, nonatomic) HKQuantity *lastTodayExerciseGoal;
@property (nonatomic) long long lastCheckedIndexForStand;
@property (readonly, nonatomic) HKQuantity *todayStandValue;
@property (readonly, nonatomic) HKQuantity *yesterdayStandValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayStandValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayStandValue;
@property (readonly, nonatomic) HKQuantity *todayStandGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayStandGoal;
@property (retain, nonatomic) HKQuantity *lastTodayStandGoal;
@property (nonatomic) long long lastCheckedIndexForAllGoals;
@property (nonatomic) long long lastCheckedIndexForDistance;
@property (readonly, nonatomic) HKQuantity *todayDistanceValue;
@property (retain, nonatomic) HKQuantity *lastTodayDistanceValue;
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary;
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary;
@property (readonly, nonatomic) long long todayIndex;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })currentStateForGoalType:(long long)a0;
- (void)setNewState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0 forGoalType:(long long)a1;
- (BOOL)allGoalsMetToday;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })currentMoveState;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })currentMoveTimeState;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })currentExerciseState;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })currentStandState;
- (void)setNewMoveState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0;
- (void)setNewMoveTimeState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0;
- (void)setNewExerciseState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0;
- (void)setNewStandState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })_baseMoveState;
- (void)_setBaseMoveState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; double x11; double x12; double x13; BOOL x14; BOOL x15; double x16; })a0;
- (void)updatePreviousPropertiesWithCurrentProperties;
- (void)clearAllProperties;
- (void)setLastCheckedIndex:(long long)a0;

@end
