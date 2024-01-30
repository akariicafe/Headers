@class UIWindowScene, NSString, MRUSystemVolumeController, NSArray, MRUVolumeView, UIViewPropertyAnimator;
@protocol MRUVolumeViewControllerDelegate;

@interface MRUVolumeViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>

@property (retain, nonatomic) MRUVolumeView *view;
@property (retain, nonatomic) MRUVolumeView *viewIfLoaded;
@property (retain, nonatomic) MRUSystemVolumeController *volumeController;
@property (weak, nonatomic) id<MRUVolumeViewControllerDelegate> delegate;
@property (nonatomic) BOOL primaryInteractionEnabled;
@property (nonatomic) BOOL secondaryInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)systemVolumeController:(id)a0 didChangeVolumeAvailable:(BOOL)a1 effectiveVolumeValue:(float)a2 forType:(long long)a3;
- (id)initWithVolumeController:(id)a0;
- (void)primarySliderValueDidChange:(id)a0;
- (void)secondarySliderValueDidChange:(id)a0;
- (void)updateSliderAsset;
- (void)updatePrimarySliderVolumeValue;
- (void)updateSecondarySliderVolumeValue;

@end
