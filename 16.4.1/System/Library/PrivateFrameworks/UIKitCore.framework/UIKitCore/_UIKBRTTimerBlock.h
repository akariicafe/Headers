@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKBRTTimerBlock : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *selfQueue;
@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ onTimer;
@property (readonly, nonatomic) id owner;

- (void)timerFired:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)fireNow;
- (id)initWithTimeInterval:(double)a0 onQueue:(id)a1 do:(id /* block */)a2 owner:(id)a3;

@end
