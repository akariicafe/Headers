@class UIWindow, NSString, NSTimer, SBRecordingIndicatorViewController, NSDate, SBSensorActivityDataProvider;

@interface SBRecordingIndicatorManager : NSObject <SBAppStatusBarAssertionManagerObserver, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver> {
    UIWindow *_recordingIndicatorWindow;
    UIWindow *_recordingIndicatorWindowUIKitStatusBarPortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewController;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerUIKitStatusBarPortal;
    BOOL _frontmostStatusBarOrIndicatorPartIsHidden;
    BOOL _indicatorIsHiddenForControlCenter;
    BOOL _visibilityIsForcedByPrototypeSettings;
    NSDate *_indicatorDisplayTime;
    NSTimer *_minimumTimeOnScreenTimer;
    SBSensorActivityDataProvider *_dataProvider;
}

@property (readonly, nonatomic) BOOL isIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)initWithSensorActivityDataProvider:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (BOOL)_allowStatusBarDelayForCameraApp:(id)a0;
- (void)setIndicatorVisible:(BOOL)a0;
- (void)controlCenterWillPresent:(id)a0;
- (void)differentiateWithoutColorDidChange:(id)a0;
- (id)indicatorColorForSensorType:(long long)a0;
- (void)updateRecordingIndicatorForStatusBarChanges;
- (void).cxx_destruct;
- (void)statusBarAssertionManager:(id)a0 removeStatusBarSettingsAssertion:(id)a1;
- (void)setIndicatorVisible:(BOOL)a0 allowStatusBarDelayForCameraApp:(BOOL)a1;
- (void)_updateIndicatorStyleForSensorActivityAttributions:(id)a0;
- (void)dataProviderDidUpdate:(id)a0;
- (unsigned long long)indicatorShapeForSensorType:(long long)a0;
- (void)activityDidChangeForSensorActivityDataProvider:(id)a0;
- (void)controlCenterDidDismiss:(id)a0;
- (void)statusBarAssertionManager:(id)a0 addStatusBarSettingsAssertion:(id)a1;
- (void)_updateIndicatorViewForSensorType:(long long)a0;

@end
