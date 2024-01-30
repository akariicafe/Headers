@class TURepeatingAction, NSObject;
@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isStopped) BOOL stopped;
@property (nonatomic, getter=isCurrentlyPerformingAction) BOOL currentlyPerformingAction;
@property (retain, nonatomic) TURepeatingAction *currentRepeatingAction;
@property (retain, nonatomic) TURepeatingAction *pendingRepeatingAction;
@property (copy, nonatomic) id /* block */ attemptNextIterationBlock;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)_beginRepeatingAction:(id)a0;
- (void)_stopWithDidFinish:(BOOL)a0;
- (void)_attemptNextIteration;
- (BOOL)_hasIterationsRemaining;
- (void)_completeWithDidFinish:(BOOL)a0;
- (void)beginRepeatingAction:(id /* block */)a0 iterations:(unsigned long long)a1 completion:(id /* block */)a2;

@end
