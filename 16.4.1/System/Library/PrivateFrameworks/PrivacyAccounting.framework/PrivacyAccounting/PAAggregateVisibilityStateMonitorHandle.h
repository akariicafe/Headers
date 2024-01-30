@class NSString, NSMutableDictionary, NSObject;
@protocol PAProcessStateMonitoringEnding, OS_dispatch_source, OS_dispatch_queue, PAAggregateVisibilityStateMonitorDelegate;

@interface PAAggregateVisibilityStateMonitorHandle : NSObject <PAProcessStateMonitoringDelegate, PAProcessStateMonitoringEnding> {
    NSObject<OS_dispatch_source> *_startupTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_states;
    long long _currentState;
    id<PAAggregateVisibilityStateMonitorDelegate> _delegate;
    id<PAProcessStateMonitoringEnding> _rawHandle;
    BOOL _startupPeriodElapsed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)setVisibilityState:(long long)a0 forBundleID:(id)a1;
- (void)bindToRawHandle:(id)a0;
- (id)initWithStartupInterval:(double)a0 onQueue:(id)a1 delegate:(id)a2;
- (void)recomputeCurrentState;
- (void)startupIntervalExpired;

@end
