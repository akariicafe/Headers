@class CMAnomalyEvent, NSObject;
@protocol OS_dispatch_queue, CMAnomalyDelegate;

@interface CMAnomalyManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    CMAnomalyEvent *fLastReceivedEvent;
    CMAnomalyEvent *fLastDispatchedEvent;
    BOOL fRegisteredForNotification;
}

@property (class, readonly, nonatomic, getter=isAnomalyDetectionAvailable) BOOL anomalyDetectionAvailable;

@property (nonatomic) id<CMAnomalyDelegate> delegate;

+ (long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)a0;

- (id)init;
- (void)dealloc;
- (void)_registerForAnomalyDetection:(BOOL)a0;
- (void)_sendRegistrationForAnomalyEvent:(id)a0;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;
- (void)ackAnomalyEvent:(id)a0 withResolution:(long long)a1;
- (void)respondToAnomalyEvent:(id)a0 withResponse:(long long)a1;
- (void)resolveAnomalyEvent:(id)a0 withResolution:(long long)a1;
- (void)updateAnomalyEventSOSCallState:(id)a0 withSOSSCallState:(long long)a1;

@end
