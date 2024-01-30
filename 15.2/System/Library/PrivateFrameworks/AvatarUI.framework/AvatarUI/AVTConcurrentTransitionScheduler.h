@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>

@property (retain, nonatomic) NSTimer *transitionTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, copy, nonatomic) id /* block */ eventHandler;

- (id)initWithEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithEventHandler:(id /* block */)a0 delay:(double)a1;
- (void)scheduleEvent;
- (void)didCompleteEvent;
- (void)scheduleTransitionTimer;

@end
