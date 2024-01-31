@class AXSimpleRuntimeManager;

@interface AXBAccessibilityManager : NSObject {
    AXSimpleRuntimeManager *_runtimeManager;
    BOOL _voiceOverIgnoresTrackpad;
}

@property (nonatomic) BOOL accelerometerDisabled;

+ (id)sharedManager;
+ (void)initializeAccessibilityMonitor;
+ (void)updateAccessibilitySettings;

- (id)init;
- (void).cxx_destruct;
- (id)_deliveryManager;
- (id)_iosAccessibilityAttributeValue:(long long)a0 forParameter:(id)a1;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (void)_iosAccessibilitySetValue:(id)a0 forAttribute:(long long)a1;
- (BOOL)_accessibilityEventTapCallback:(id)a0;
- (id)_accessibilityAssistiveTouchApplication;
- (id)_accessibilityCarPlayApplicationPid;
- (BOOL)_accessibilityDisplayRequiresRotateForPoints:(id)a0;
- (id)_accessibilityInputUIApplication;
- (id)_accessibilityLiveCaptionsApplication;
- (void)_accessibilityRepostEvent:(id)a0;
- (id)_accessibilitySystemApp;
- (id)_accessibilitySystemAppApplicationPid;
- (struct CGPoint { double x0; double x1; })_accessibilityViewPointFromHostedViewContext:(struct CGPoint { double x0; double x1; })a0 displayId:(unsigned int)a1;
- (BOOL)_accessibilityIsInternalInstall;
- (BOOL)_axMenuCapture:(id)a0;
- (void)_updateVoiceOverIgnoresTrackpad;
- (int)_accessibilityApplicationForContextId:(unsigned int)a0;
- (id)_accessibilityCarPlayApp;
- (struct CGPoint { double x0; double x1; })_accessibilityConvertHostedViewPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityNativeFocusedApplication;
- (id)_accessibilitySpringBoardApplication;
- (id)_accessibilitySystemAppApplicationBundleId;
- (id)_accessibilityUIServerApplication;
- (BOOL)_assistiveTouchCapture:(id)a0;
- (id)_axElementForUID:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)_commonEventRepForTouchEventWithType:(unsigned int)a0 location:(struct CGPoint { double x0; double x1; })a1 force:(double)a2 flags:(unsigned int)a3 contextId:(unsigned int)a4;
- (BOOL)_gaxCapture:(id)a0;
- (BOOL)_handleItemChooserVisible:(unsigned int)a0;
- (int)_handlePidForSpecialCases:(unsigned int)a0;
- (BOOL)_inspectorCapture:(id)a0;
- (id)_iosAccessibilityAttributeValue:(long long)a0 element:(id)a1;
- (double)_processPassiveEventQueue;
- (void)_releasePendingEvents:(double)a0;
- (BOOL)_screenReaderCapture:(id)a0;
- (void)_sendCancelTouchEvent;
- (void)_sendEventRep:(id)a0;
- (void)_sendFingerEvent:(unsigned int)a0 location:(struct CGPoint { double x0; double x1; })a1 force:(double)a2 flags:(unsigned int)a3 contextId:(unsigned int)a4;
- (void)_sendPressFingerEvent:(BOOL)a0 location:(struct CGPoint { double x0; double x1; })a1 force:(double)a2 flags:(unsigned int)a3 contextId:(unsigned int)a4 secureName:(unsigned int)a5;
- (void)_sendStylusEvent:(unsigned int)a0 location:(struct CGPoint { double x0; double x1; })a1 force:(double)a2 altitude:(double)a3 azimuth:(double)a4 flags:(unsigned int)a5 contextId:(unsigned int)a6;
- (void)_setDeviceOrientationCapability:(BOOL)a0;
- (BOOL)_showingBootUI;
- (void)_startPassiveResendThread;
- (void)_undoContextShiftedPoints:(id)a0;
- (void)_userEventOccurred;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityConvertHostedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityConvertHostedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })accessibilityConvertHostedViewPoint:(struct CGPoint { double x0; double x1; })a0 fromContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })accessibilityConvertHostedViewPoint:(struct CGPoint { double x0; double x1; })a0 toContextId:(unsigned int)a1 displayId:(unsigned int)a2;
- (id)allJobLabels;
- (void)disableAccessibility;
- (void)initializeAccessibility;
- (void)observerClientDied;
- (void)resetAccessibilityUIHitPort;
- (void)resetAssistiveTouchHitPort;
- (void)simulatePressAtPoint:(struct CGPoint { double x0; double x1; })a0 withContextId:(unsigned int)a1 withDelay:(float)a2 withForce:(double)a3 withSecureName:(unsigned int)a4;
- (id)windowServerDisplayForDisplayId:(unsigned int)a0;

@end
