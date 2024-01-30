@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler>

@property (nonatomic) BOOL isRunningEvent;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (id)initWithEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)scheduleEvent;
- (void)didCompleteEvent;

@end
