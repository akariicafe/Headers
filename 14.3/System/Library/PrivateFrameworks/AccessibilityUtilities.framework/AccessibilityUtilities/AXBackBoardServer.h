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

- (void)_didConnectToServer;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1;
- (int)accessibilityFullKeyboardAccessDaemonPID;
- (id)_serviceName;
- (void)_willClearServer;
- (BOOL)isGuidedAccessUnmanagedSelfLocked;
- (id)init;
- (void)sessionIsLoginSessionWithResult:(id /* block */)a0;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)backboardServiceInstance;
- (void)homeClickSwallowedForGuidedAccess;
- (void).cxx_destruct;
- (void)postEvent:(id)a0 afterNamedTap:(id)a1 includeTaps:(id)a2;
- (void)toggleGuidedAccess;
- (void)resetAccessibilityFeatures;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1 toContextId:(unsigned int)a2;
- (void)setHearingAidControlIsVisible:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomInitialFocusRectWithQueryingContext:(unsigned int)a0;
- (void)dealloc;
- (BOOL)isGuidedAccessInWorkspace;
- (BOOL)isRestrictedForAAC;
- (int)hearingAidServerPID;
- (id)guidedAccessEffectiveAppBundleIdentifier;
- (void)requestGuidedAccessSessionEndWithCompletion:(id /* block */)a0;
- (void)setSwitchControlRendersDeviceUnusable:(BOOL)a0;
- (void)registerAssistiveTouchPID:(int)a0;
- (id)performGuidedAccessAutomationCommand:(id)a0 error:(id *)a1;
- (id)_springboardParametersForGuidedAccessAvailability;
- (BOOL)_shouldDispatchLocally;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (unsigned int)contextIdForPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContextId:(unsigned int)a1;
- (void)setSwitchControlHasScreenSwitch:(BOOL)a0;
- (void)registerGestureConflictWithZoom:(id)a0;
- (void)setCapsLockLightOn:(BOOL)a0;
- (id)guidedAccessIgnoredRegions;
- (void)_sendRequestGuidedAccessSessionMessage:(id)a0 numberOfRetryAttempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)adjustSystemZoom:(int)a0;
- (id)_handleEventListener:(id)a0;
- (void)setAccessibilityPreferenceAsMobile:(id)a0 value:(id)a1 notification:(id)a2;
- (BOOL)tripleClickHomeButtonPress;
- (void)postEvent:(id)a0 systemEvent:(BOOL)a1;
- (BOOL)isGuidedAccessSelfLockedToApp:(id)a0;
- (void)jetsamThirdPartyApps;
- (BOOL)blueLightStatusEnabled;
- (BOOL)isGuidedAccessActive;
- (BOOL)brightnessFiltersEnabled;
- (void)setZoomInitialFocusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContext:(unsigned int)a1;
- (void)disableBrightnessFilters;
- (void)registerHearingAidServerPID:(int)a0;
- (id)accessibilityPreferenceAsMobile:(id)a0;
- (void)restoreCachedBrightnessFilters;
- (void)registerSiriViewServicePID:(int)a0;
- (void)userEventOccurred;
- (unsigned long long)guidedAccessAvailability;
- (BOOL)supportsAccessibilityDisplayFilters;
- (void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)a0 completion:(id /* block */)a1;
- (void)registerFullKeyboardAccessDaemonPID:(int)a0;
- (struct AXBColorFilterDescription { double x0[3][3]; })colorFilterFromLastUpdate;
- (BOOL)invertColorsEnabled;
- (void)registerAccessibilityUIServicePID:(int)a0;
- (void)setInvertColorsEnabled:(BOOL)a0;
- (int)accessibilityUIServicePID;
- (BOOL)adaptationEnabled;
- (int)accessibilityAssistiveTouchPID;
- (unsigned long long)currentGuidedAccessModeAndSessionApp:(id *)a0;
- (void)guidedAccessEffectiveAppBundleIdentifier:(id /* block */)a0;
- (void)setSessionIsLoginSession:(BOOL)a0;
- (void)setIsSpeakScreenHighlightVisible:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1;
- (void)setLockScreenDimTimerEnabled:(BOOL)a0;
- (BOOL)supportsAdaptation;

@end
