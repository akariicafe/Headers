@protocol SSTestingCoordinatorDelegate;

@interface SSTestingCoordinator : NSObject

@property (weak, nonatomic) id<SSTestingCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)_delayedHandleRunPPTRequest:(id)a0;
- (void)handleRunPPTRequest:(id)a0;

@end
