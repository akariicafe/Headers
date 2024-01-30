@class SBRecordingIndicatorViewController, SBRecordingIndicatorSystemApertureElement, NSString, NSDate, NSSet, UIWindow, NSTimer, SBSensorActivityDataProvider, SBWindowScene;
@protocol SAInvalidatable;

@interface SBRecordingIndicatorManager : NSObject <SBWindowSceneStatusBarAssertionManagerObserver, SBRecordingIndicatorViewControllerDelegate, SBSensorActivityObserver, SBUIActiveOrientationObserver, PTSettingsKeyObserver> {
    UIWindow *_recordingIndicatorWindow;
    UIWindow *_recordingIndicatorWindowUIKitStatusBarPortal;
    UIWindow *_recordingIndicatorWindowSystemAperturePortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewController;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerUIKitStatusBarPortal;
    SBRecordingIndicatorViewController *_recordingIndicatorViewControllerSystemAperturePortal;
    BOOL _indicatorStatusBarPartIsHidden;
    BOOL _indicatorIsHiddenForControlCenter;
    BOOL _visibilityIsForcedByPrototypeSettings;
    NSDate *_indicatorDisplayTime;
    NSTimer *_minimumTimeOnScreenTimer;
    SBSensorActivityDataProvider *_dataProvider;
}

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) NSSet *activeCameraAndMicrophoneActivityAttributions;
@property (retain, nonatomic) SBRecordingIndicatorSystemApertureElement *recordingIndicatorElement;
@property (retain, nonatomic) id<SAInvalidatable> recordingIndicatorElementAssertion;
@property (nonatomic) BOOL systemApertureIsSoLargeThatTheStatusBarIsProbablyHidden;
@property (nonatomic, getter=isSystemApertureEmpty) BOOL systemApertureEmpty;
@property (readonly, nonatomic, getter=isIndicatorVisible) BOOL indicatorVisible;
@property (readonly, nonatomic, getter=isIndicatorVisibleAtStatusBarLocation) BOOL indicatorVisibleAtStatusBarLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)_createRecordingIndicatorForStatusBarLocation;
- (void)_dataProviderDidUpdate:(id)a0;
- (void)_createRecordingIndicatorForSystemApertureLocation;
- (BOOL)_supportsStatusBarItem;
- (void)updateRecordingIndicatorForStatusBarChanges;
- (id)_indicatorColorForSensorType:(long long)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_updateIndicatorStyleForSensorActivityAttributions:(id)a0;
- (void)differentiateWithoutColorDidChange:(id)a0;
- (void)controlCenterDidDismiss:(id)a0;
- (void)updateRecordingIndicatorLocationIfNecessary;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)statusBarAssertionManager:(id)a0 removeStatusBarSettingsAssertion:(id)a1;
- (void)_setIndicatorVisible:(BOOL)a0 atLocation:(unsigned long long)a1;
- (void)setIndicatorVisible:(BOOL)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (unsigned long long)_indicatorShapeForSensorType:(long long)a0;
- (void)_updateIndicatorViewForSensorType:(long long)a0;
- (void)controlCenterWillPresent:(id)a0;
- (void)activityDidChangeForSensorActivityDataProvider:(id)a0;
- (id)_indicatorIdentifierForSensorType:(long long)a0;
- (void)_updateRecordingIndicatorForStatusBarChanges;
- (void)recordingIndicatorViewController:(id)a0 didUpdateIndicatorState:(unsigned long long)a1;
- (void)statusBarAssertionManager:(id)a0 addStatusBarSettingsAssertion:(id)a1;
- (void)setIndicatorVisibleAtStatusBarLocation:(BOOL)a0;
- (void)_updateRecordingIndicatorLocationIfNecessary;
- (void).cxx_destruct;
- (void)_updateSystemApertureElementAssertion;
- (void)_createRecordingIndicatorForStandaloneLocation;
- (void)systemApertureLayoutDidChange:(id)a0;

@end
