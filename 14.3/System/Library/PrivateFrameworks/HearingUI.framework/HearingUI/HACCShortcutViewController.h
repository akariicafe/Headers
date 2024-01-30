@class NSMutableDictionary, HACCContentViewController, CCUIContentModuleDetailTransitioningDelegate, NSMutableArray, CCUILabeledRoundButtonViewController, AXRemoteHearingAidDevice, UIView, NSString, CCUIContentModuleContext, AXDispatchTimer, MediaControlsBluetoothListeningModeButton, UIScrollView, HACCShortcutViewBackgroundController;
@protocol AXHAShortcutUpdateProtocol;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate> {
    double _dismissalGestureYOffset;
    struct CGPoint { double x; double y; } _backgroundViewDismissalOrigin;
    struct CGPoint { double x; double y; } _mainModuleOrigin;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    AXDispatchTimer *_bluetoothAvailabilityTimer;
    AXDispatchTimer *_noiseControlUpdateTimer;
    MediaControlsBluetoothListeningModeButton *_listeningModeButton;
}

@property (retain, nonatomic) NSMutableDictionary *moduleToViewControllerMap;
@property (retain, nonatomic) NSMutableDictionary *gridToModuleMap;
@property (retain, nonatomic) NSMutableDictionary *moduleToPointMap;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (retain, nonatomic) CCUILabeledRoundButtonViewController *otherDevicesButtonViewController;
@property (retain, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice;
@property (retain, nonatomic) NSString *currentOtherDeviceName;
@property (retain, nonatomic) NSString *currentOtherDeviceType;
@property (nonatomic) BOOL bluetoothAvailable;
@property (nonatomic) BOOL listeningForHearingAidUpdates;
@property (nonatomic) BOOL listeningForHeadphoneUpdates;
@property (nonatomic) BOOL headphoneAudioAvailable;
@property (nonatomic) BOOL shouldDisplayOtherDevice;
@property (weak, nonatomic) id<AXHAShortcutUpdateProtocol> delegate;
@property (retain, nonatomic) HACCShortcutViewBackgroundController *backgroundController;
@property (readonly, weak, nonatomic) HACCContentViewController *expandedController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView;
- (void).cxx_destruct;
- (BOOL)isExpanded;
- (double)preferredExpandedContentHeight;
- (id)listeningMode;
- (BOOL)setListeningMode:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (double)separatorHeight;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (double)preferredContentWidth;
- (void)bluetoothAvailabilityDidChange:(id)a0;
- (void)controlDidActivate:(id)a0;
- (void)updateViewForProperties:(id)a0;
- (void)updateViewForModule:(unsigned long long)a0;
- (void)updateRoutes;
- (void)updateNoiseControl:(id)a0;
- (void)contentCategoryDidChange:(id)a0;
- (id)backgroundUpdateQueue;
- (void)updateAvailableControlsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)listenForHearingAidUpdates;
- (void)startListeningForHeadphoneUpdates;
- (void)stopListeningForHeadphoneUpdates;
- (BOOL)shouldDisplayControlForModule:(unsigned long long)a0;
- (BOOL)shouldDisplayDeviceToggle;
- (void)otherDeviceButtonTapped:(id)a0;
- (BOOL)shouldShowNoiseControl;
- (void)listeningModeButtonDidUpdateValue:(id)a0;
- (unsigned long long)numberOfColumnsForSize:(struct CGSize { double x0; double x1; })a0;
- (double)moduleHeight;
- (void)_logLiveListenAnalytics;
- (void)setAlpha:(double)a0 forAllModulesExcept:(id)a1;

@end
