@class NSMutableArray, DMCHangDetectionQueue;

@interface DMCEnrollmentFlowControllerBase : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *workerQueue;
@property (nonatomic) unsigned long long currentStep;
@property (nonatomic) unsigned long long nextStepIndex;
@property (retain, nonatomic) NSMutableArray *stepQueue;

- (void).cxx_destruct;
- (id)init;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_resetToInitialSteps;
- (void)_workerQueue_flowCompleted;
- (void)_appendSteps:(id)a0;
- (void)_pollNextStep;

@end
