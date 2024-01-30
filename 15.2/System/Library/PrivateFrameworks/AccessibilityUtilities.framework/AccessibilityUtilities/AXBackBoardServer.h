@class NSMutableArray;

@interface AXBackBoardServer : AXServer {
    BOOL _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomAttributeListeners;
}

@property (nonatomic) BOOL invertColorsEnabled;
@property (nonatomic) BOOL inPreboardMode;
@property (nonatomic) BOOL inCheckerBoardMode;

+ (id)server;

- (id)_serviceName;
- (id)_springboardParametersForGuidedAccessAvailability;
- (BOOL)supportsAdaptation;
- (BOOL)_shouldDispatchLocally;
- (BOOL)isRestrictedForAAC;
- (int)hearingAidServerPID;
- (BOOL)isGuidedAccessSelfLockedToApp:(id)a0;
- (int)accessibilityAssistiveTouchPID;
- (void)setAccessibilityPreferenceAsMobile:(id)a0 value:(id)a1 notification:(id)a2;
- (id)guidedAccessIgnoredRegions;
- (BOOL)isGuidedAccessActive;
- (void)jetsamThirdPartyApps;
- (void)setCapsLockLightOn:(BOOL)a0;
- (void)userEventOccurred;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (void)requestGuidedAccessSessionEndWithCompletion:(id /* block */)a0;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (void)setDeviceOrientation:(long long)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1;
- (void)resetAccessibilityFeatures;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1;
- (BOOL)isGuidedAccessUnmanagedSelfLocked;
- (void)guidedAccessEffectiveAppBundleIdentifier:(id /* block */)a0;
- (BOOL)adaptationEnabled;
- (BOOL)isGuidedAccessInWorkspace;
- (void)registerSiriViewServicePID:(int)a0;
- (void)registerAccessibilityUIServicePID:(int)a0;
- (void)registerFullKeyboardAccessDaemonPID:(int)a0;
- (void)sessionIsLoginSessionWithResult:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1;
- (void)registerAssistiveTouchPID:(int)a0;
- (BOOL)brightnessFiltersEnabled;
- (void)setSessionIsLoginSession:(BOOL)a0;
- (void)setSwitchControlHasScreenSwitch:(BOOL)a0;
- (void)disableBrightnessFilters;
- (void)toggleGuidedAccess;
- (BOOL)supportsAccessibilityDisplayFilters;
- (void)setInvertColorsEnabled:(BOOL)a0;
- (int)accessibilityUIServicePID;
- (void).cxx_destruct;
- (BOOL)invertColorsEnabled;
- (unsigned int)contextIdForPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (id)backboardServiceInstance;
- (void)homeClickSwallowedForGuidedAccess;
- (unsigned long long)currentGuidedAccessModeAndSessionApp:(id *)a0;
- (void)setLockScreenDimTimerEnabled:(BOOL)a0;
- (BOOL)tripleClickHomeButtonPress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomInitialFocusRectWithQueryingContext:(unsigned int)a0;
- (int)accessibilityFullKeyboardAccessDaemonPID;
- (void)setZoomInitialFocusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContext:(unsigned int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1 toContextId:(unsigned int)a2;
- (void)postEvent:(id)a0 systemEvent:(BOOL)a1;
- (BOOL)blueLightStatusEnabled;
- (unsigned long long)guidedAccessAvailability;
- (void)dealloc;
- (void)_sendRequestGuidedAccessSessionMessage:(id)a0 numberOfRetryAttempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)registerHearingAidServerPID:(int)a0;
- (void)adjustSystemZoom:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContextId:(unsigned int)a1;
- (void)restoreCachedBrightnessFilters;
- (id)guidedAccessEffectiveAppBundleIdentifier;
- (void)setHearingAidControlIsVisible:(BOOL)a0;
- (void)setIsSpeakScreenHighlightVisible:(BOOL)a0;
- (id)performGuidedAccessAutomationCommand:(id)a0 error:(id *)a1;
- (void)registerGestureConflictWithZoom:(id)a0;
- (void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)postEvent:(id)a0 afterNamedTap:(id)a1 includeTaps:(id)a2;
- (void)setSwitchControlRendersDeviceUnusable:(BOOL)a0;
- (struct AXBColorFilterDescription { double x0[3][3]; })colorFilterFromLastUpdate;
- (id)accessibilityPreferenceAsMobile:(id)a0;

@end
