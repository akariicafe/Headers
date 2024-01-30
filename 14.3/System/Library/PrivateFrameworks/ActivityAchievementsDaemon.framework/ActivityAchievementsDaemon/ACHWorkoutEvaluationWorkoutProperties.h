@interface ACHWorkoutEvaluationWorkoutProperties : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double kilocalories;
@property (readonly, nonatomic) double kilometers;
@property (readonly, nonatomic) BOOL isFirstParty;

- (id)initWithWorkout:(id)a0;

@end
