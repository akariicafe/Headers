@class NSTimer, NSString, SBAlwaysOnPolicyCoordinator, SBAlwaysOnTelemetryMetrics, BMDisplayAlwaysOn, NSDictionary, NSObject, SBAlwaysOnDefaults, BLSBacklight, SBBacklightEnvironmentSessionProvider;
@protocol BSDefaultObserver, OS_dispatch_queue;

@interface SBAlwaysOnTelemetryEmitter : NSObject <BLSBacklightStateObserving, BLSHBacklightHostTelemetryDelegate, SBBacklightEnvironmentSessionProviderObserver, BLSHAssertionServiceObserving, BLSHFlipbookTelemetry> {
    SBBacklightEnvironmentSessionProvider *_backlightEnvironmentSessionProvider;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    id<BSDefaultObserver> _alwaysOnDefaultsObserverToken;
    BLSBacklight *_backlight;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    SBAlwaysOnTelemetryMetrics *_mq_metrics;
    NSTimer *_mq_deferredLoggingTimer;
    NSObject<OS_dispatch_queue> *_powerlogSendQueue;
    NSObject<OS_dispatch_queue> *_biomeWriterQueue;
    BMDisplayAlwaysOn *_lastBiomeEvent;
    NSDictionary *_lastAlwaysOnEnabledPayload;
}

@property (weak, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)_significantTimeChange:(id)a0;
- (void)logTelemetryForInvalidation:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithBacklightEnvironmentSessionProvider:(id)a0;
- (void)logTelemetryForRenderSession:(id)a0;
- (void).cxx_destruct;
- (void)logTelemetryForRequestDates:(id)a0;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (void)backlightEnvironmentSessionsProvider:(id)a0 didUpdatePresentation:(id)a1 withBundleIdentifiers:(id)a2;
- (void)backlightTelemetrySource:(id)a0 didAcquireSystemActivityWithError:(id)a1 isActive:(BOOL)a2 details:(id)a3 forEvent:(id)a4;
- (void)backlightTelemetrySource:(id)a0 didCompleteUpdateToFlipbookState:(long long)a1 forEvent:(id)a2;
- (void)backlightTelemetrySource:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)backlightTelemetrySource:(id)a0 didUpdateDisplayForState:(long long)a1 forEvent:(id)a2;
- (void)backlightTelemetrySource:(id)a0 didUpdateVisualContentsToBeginTransitionToState:(long long)a1 forEvent:(id)a2;
- (void)backlightTelemetrySource:(id)a0 hadExistingSystemActivityForEvent:(id)a1;
- (void)backlightTelemetrySource:(id)a0 willTransitionToState:(long long)a1 forEvent:(id)a2;
- (void)backlightTelemetrySource:(id)a0 willUpdateDisplayForState:(long long)a1 forEvent:(id)a2;
- (void)completeIntializationAfterBLSStartup;
- (void)service:(id)a0 didAcquireAssertion:(id)a1;
- (void)service:(id)a0 didCancelAssertion:(id)a1 withError:(id)a2;
- (void)service:(id)a0 didPauseAssertion:(id)a1;
- (void)service:(id)a0 didResumeAssertion:(id)a1;

@end
