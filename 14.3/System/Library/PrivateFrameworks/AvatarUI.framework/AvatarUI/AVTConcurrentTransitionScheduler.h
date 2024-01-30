@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>

@property (retain, nonatomic) NSTimer *transitionTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)stop;
- (void)scheduleEvent;
- (void)didCompleteEvent;
- (void)scheduleTransitionTimer;
- (id)initWithEventHandler:(id /* block */)a0 delay:(double)a1;

@end
