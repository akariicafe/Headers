@class NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VSOccasionalTimesObserver : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _invalid;
    NSArray *_times;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextFireTime;
    id /* block */ _block;
}

@property (readonly) struct OpaqueCMTimebase { } *timebase;

- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 times:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_resetNextFireTime;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_reallyInvalidate;

@end
