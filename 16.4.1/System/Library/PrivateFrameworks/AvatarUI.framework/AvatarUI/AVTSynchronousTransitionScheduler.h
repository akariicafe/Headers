@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler>

@property (nonatomic) BOOL isRunningEvent;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (void)stop;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)didCompleteEvent;
- (void)scheduleEvent;

@end
