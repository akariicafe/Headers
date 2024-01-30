@class NSString, DATaskManager, DAStatusReport;

@interface SubCalDATask : NSObject <DATask>

@property (nonatomic) BOOL finished;
@property (weak, nonatomic) DATaskManager *taskManager;
@property (retain, nonatomic) DAStatusReport *statusReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancelTaskWithReason:(int)a0 underlyingError:(id)a1;
- (BOOL)shouldHoldPowerAssertion;
- (void)didFinish;
- (void)performTask;
- (id)consumerDictKey;
- (void)willFinish;
- (void)performDelegateCallbackWithError:(id)a0;

@end
