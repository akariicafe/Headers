@class LNWatchdogTimer, NSObject;
@protocol OS_dispatch_queue;

@interface LNDebouncer : NSObject

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double maxDelay;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) LNWatchdogTimer *timer;
@property (readonly, nonatomic) LNWatchdogTimer *longTimer;

- (void)trigger;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 maxDelay:(double)a1 queue:(id)a2 block:(id /* block */)a3;

@end
