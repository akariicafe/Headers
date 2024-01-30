@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>

@property (retain, nonatomic) NSTimer *transitionTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (void)stop;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)didCompleteEvent;
- (id)initWithEventHandler:(id /* block */)a0 delay:(double)a1;
- (void)scheduleEvent;
- (void)scheduleTransitionTimer;

@end
