@class NSArray, NSDictionary;

@interface ACHDataStoreActivityProperties : NSObject

@property (nonatomic) unsigned long long currentMoveStreak;
@property (nonatomic) unsigned long long bestMoveStreak;
@property (nonatomic) unsigned long long totalMoveGoalsMade;
@property (nonatomic) unsigned long long totalMoveGoalsAttempted;
@property (nonatomic) double bestMoveValue;
@property (nonatomic) double bestMoveGoalValue;
@property (nonatomic) double bestMoveTimeValue;
@property (nonatomic) double bestMoveTimeGoalValue;
@property (nonatomic) unsigned long long currentExerciseStreak;
@property (nonatomic) unsigned long long bestExerciseStreak;
@property (nonatomic) unsigned long long totalExerciseGoalsMade;
@property (nonatomic) unsigned long long totalExerciseGoalsAttempted;
@property (nonatomic) double bestExerciseValue;
@property (nonatomic) double bestExerciseGoalValue;
@property (nonatomic) unsigned long long currentStandStreak;
@property (nonatomic) unsigned long long bestStandStreak;
@property (nonatomic) unsigned long long totalStandGoalsMade;
@property (nonatomic) unsigned long long totalStandGoalsAttempted;
@property (nonatomic) unsigned long long bestStandValue;
@property (nonatomic) unsigned long long bestStandGoalValue;
@property (nonatomic) unsigned long long lastStepCount;
@property (nonatomic) unsigned long long bestStepCount;
@property (nonatomic) long long storeValuesValidBeforeSummaryIndex;
@property (retain, nonatomic) ACHDataStoreActivityProperties *previousValues;
@property (readonly, nonatomic) NSArray *dictionaryKeys;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;

@end
