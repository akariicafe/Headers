@class WFAutoIncrementingProgress, NSObject;
@protocol OS_dispatch_source;

@interface WFDelayAction : WFAction

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) WFAutoIncrementingProgress *delayProgress;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;

@end
