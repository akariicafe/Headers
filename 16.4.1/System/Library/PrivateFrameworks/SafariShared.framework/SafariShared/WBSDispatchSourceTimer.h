@class NSObject;
@protocol OS_dispatch_source;

@interface WBSDispatchSourceTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double startDelay;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)scheduledTimerWithInterval:(double)a0 repeats:(BOOL)a1 handler:(id /* block */)a2;
+ (id)scheduledRepeatingTimerWithStartDelay:(double)a0 interval:(double)a1 handler:(id /* block */)a2;

- (void)schedule;
- (void)_scheduleTimer;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithStartDelay:(double)a0 interval:(double)a1 repeats:(BOOL)a2 handler:(id /* block */)a3;
- (void)resetFireDate;

@end
