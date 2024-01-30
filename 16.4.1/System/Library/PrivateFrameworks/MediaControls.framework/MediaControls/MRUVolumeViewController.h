@class UIWindowScene, NSString, MRUSystemVolumeController, MRUVisualStylingProvider, MRUVolumeView, NSArray, UIViewPropertyAnimator;
@protocol MRUVolumeViewControllerDelegate;

@interface MRUVolumeViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>

@property (retain, nonatomic) MRUVolumeView *view;
@property (retain, nonatomic) MRUVolumeView *viewIfLoaded;
@property (retain, nonatomic) MRUSystemVolumeController *volumeController;
@property (weak, nonatomic) id<MRUVolumeViewControllerDelegate> delegate;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
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

- (void)dismiss;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)systemVolumeController:(id)a0 didChangeVolumeControlCapabilities:(unsigned int)a1 effectiveVolumeValue:(float)a2 forType:(long long)a3;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)updateSliderAsset;
- (void)secondarySliderValueDidChange:(id)a0;
- (void)updatePrimarySliderVolumeValue;
- (BOOL)_canShowWhileLocked;
- (void)primarySliderValueDidChange:(id)a0;
- (void)updateVisibility;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithVolumeController:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)increaseTouchUpInside:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)updateSecondarySliderVolumeValue;
- (void)decreaseTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
