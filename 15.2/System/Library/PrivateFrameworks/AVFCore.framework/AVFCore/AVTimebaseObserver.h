@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimebaseObserver : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase { } *_timebase;
    BOOL _isObservingTimebase;
    double _lastRate;
    double _currentRate;
    BOOL _invalid;
}

@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
@property (readonly) struct OpaqueCMTimebase { } *timebase;
@property (readonly, nonatomic) BOOL invalidated;

- (void)invalidate;
- (void)dealloc;
- (void)_reallyInvalidate;
- (void)_removeTimebaseFromTimerSource;
- (void)_stopObservingTimebaseNotifications;
- (void)_attachTimerSourceToTimebase;
- (void)_startObservingTimebaseNotifications;
- (void)_effectiveRateChanged;
- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 queue:(id)a1;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_finishInitializationWithTimerEventHandler:(id /* block */)a0;

@end
