@class NSString;

@interface SiriTasksEvaluationResult : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isEffectiveTask;
@property (nonatomic) BOOL isSuccessfulTask;

- (void).cxx_destruct;
- (id)initWithTaskId:(id)a0 isEffectiveTask:(BOOL)a1 isSuccessfulTask:(BOOL)a2;

@end
