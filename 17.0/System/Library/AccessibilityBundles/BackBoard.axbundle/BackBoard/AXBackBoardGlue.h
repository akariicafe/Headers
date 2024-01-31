@class NSString;

@interface AXBackBoardGlue : NSObject <AXBackBoardServerInstanceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)setLockScreenDimTimerEnabled:(BOOL)a0;
+ (int)accessibilityUIServerPid;
+ (void)sendUserEventOccurred;
+ (int)liveCaptionsPid;
+ (void)_applyExtendedHitTestInformationForCAScreenCoordinates:(struct CGPoint { double x0; double x1; })a0 displayUUID:(id)a1 toPathAttributes:(id)a2 secureName:(unsigned int)a3 excludeContextIDs:(id)a4;
+ (id)_authenticationMessageForLocationInCAScreenCoordinates:(struct CGPoint { double x0; double x1; })a0 eventType:(unsigned int)a1 excludeContextIDsFromHitTest:(id)a2;
+ (id)_authenticationMessageForLocationInCAScreenCoordinates:(struct CGPoint { double x0; double x1; })a0 eventType:(unsigned int)a1 excludeContextIDsFromHitTest:(id)a2 secureName:(unsigned int)a3;
+ (void)_loadAuxiliaryBundles;
+ (void)_repeatAggregateStatistics;
+ (BOOL)_supportsUpdatedAuthenticationProcessDawn;
+ (int)assistiveTouchPid;
+ (struct CGPoint { double x0; double x1; })displayConvertFromCAScreen:(struct CGPoint { double x0; double x1; })a0 withDisplayIntegerId:(unsigned int)a1;
+ (struct CGPoint { double x0; double x1; })displayConvertToCAScreen:(struct CGPoint { double x0; double x1; })a0 withDisplayIntegerId:(unsigned int)a1;
+ (id)hidClientConnectionManager;
+ (int)inputUIPid;
+ (BOOL)isDisplayBacklightOff;
+ (void)kickoffAggregateStatistics;
+ (void)processExternalHIDEvent:(struct __IOHIDEvent { } *)a0;
+ (int)siriViewServicePid;

- (void)registerEventListener:(BOOL)a0;
- (void)setCapsLockLightOn:(BOOL)a0;
- (void)setLockScreenDimTimerEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (void)setIsSpeakScreenHighlightVisible:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (void)userEventOccurred;
- (void)setFullKeyboardAccessDaemonPID:(int)a0;
- (int)accessibilityAssistiveTouchPid;
- (int)accessibilityFullKeyboardAccessDaemonPid;
- (int)accessibilityLiveCaptionsPid;
- (int)accessibilityUIServerPid;
- (unsigned int)contextIdForDisplayPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)contextIdHosterForContextId:(unsigned int)a0;
- (int)hearingAidServerPid;
- (void)postEvent:(id)a0 systemEvent:(BOOL)a1 afterNamedTap:(id)a2 namedTaps:(id)a3;
- (void)setAccessibilityUIServerPid:(int)a0;
- (void)setAssistiveTouchPid:(int)a0;
- (void)setDisableSystemGestureRecognitionInEvents:(BOOL)a0;
- (void)setHearingAidServerPid:(int)a0;
- (void)setLiveCaptionsPid:(int)a0;
- (void)setSiriViewServicePid:(int)a0;
- (void)zoomListenerRegistered;

@end
