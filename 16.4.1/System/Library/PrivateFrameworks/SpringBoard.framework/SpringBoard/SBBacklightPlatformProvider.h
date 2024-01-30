@class SBAveragePixelLuminanceLimitController, NSString, UIWindowScene, SBBacklightSignificantUserInteractionMonitor, SBAlwaysOnPolicyCoordinator, NSHashTable, SBAlwaysOnBrightnessCurveController, BLSHFlipbookSpecification, SBFWakeAnimationSettings, SBBacklightEnvironmentSessionProvider, SBBacklightBlankingWindow, SBAlwaysOnDefaults;
@protocol BLSHFlipbookTelemetry, BLSHBacklightEnvironmentSessionProviding;

@interface SBBacklightPlatformProvider : NSObject <SBBacklightSignificantUserInteractionMonitorObserver, BLSHFlipbookTelemetry, BLSHBacklightPlatformProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SBFWakeAnimationSettings *_wakeAnimationSettings;
    SBBacklightEnvironmentSessionProvider *_sessionProvider;
    SBBacklightBlankingWindow *_blankingWindow;
    BOOL _lock_showingBlankingWindow;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    SBAlwaysOnBrightnessCurveController *_brightnessCurveController;
    SBAveragePixelLuminanceLimitController *_aplLimitController;
    BLSHFlipbookSpecification *_flipbookSpecification;
    id<BLSHFlipbookTelemetry> _telemetryEmitter;
    BOOL _lock_alwaysOnEnabled;
    NSHashTable *_lock_alwaysOnObservers;
}

@property (class, readonly, nonatomic) BOOL deviceSupportsAlwaysOn;

@property (weak, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor;
@property (readonly, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double backlightFadeInDuration;
@property (readonly, nonatomic) double backlightFadeOutDuration;
@property (readonly, nonatomic) id<BLSHBacklightEnvironmentSessionProviding> sessionProvider;
@property (readonly, nonatomic, getter=isShowingBlankingWindow) BOOL showingBlankingWindow;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property (readonly, nonatomic) id<BLSHFlipbookTelemetry> flipbookTelemetryDelegate;
@property (readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) BOOL useAlwaysOnBrightnessCurve;
@property (readonly, nonatomic) float backlightDimmedFactor;
@property (readonly, nonatomic) double backlightDimmingDuration;
@property (readonly, nonatomic) BOOL suppressionSupported;

- (void)significantUserInteractionMonitorDetectedSignificantUserInteraction:(id)a0;
- (void)completeInitializationAfterBLSStartup;
- (void)showBlankingWindow:(BOOL)a0 withFadeDuration:(double)a1;
- (void)criticalAssertDidFail:(id)a0 resetFailure:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)useAlwaysOnBrightnessCurve:(BOOL)a0 withRampDuration:(double)a1;
- (void)logTelemetryForInvalidation:(id)a0;
- (void)_updateAlwaysOnEnabled;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)initWithBacklightEnvironmentSessionProvider:(id)a0;
- (void)logTelemetryForRenderSession:(id)a0;
- (void)_setBlankingWindowVisible:(BOOL)a0 fadeDuration:(double)a1;
- (void)_notifyObserversOfSignificantUserInteraction;
- (void).cxx_destruct;
- (void)logTelemetryForRequestDates:(id)a0;

@end
