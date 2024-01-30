@class NSString, OKPresentationViewController, PUSlideshowViewControllerSpec, PHPlaceholderView, PUSlideshowSession, UITapGestureRecognizer, UIViewController;
@protocol PUSlideshowViewControllerDelegate;

@interface PUSlideshowViewController : UIViewController <UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext> {
    OKPresentationViewController *_currentPresentationController;
    PUSlideshowViewControllerSpec *_spec;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _playerStateButtonItemIndex;
}

@property (retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser;
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView;
@property (retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController;
@property (readonly, nonatomic) PUSlideshowSession *session;
@property (readonly, nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<PUSlideshowViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)initWithSession:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)loadView;
- (void)_updateChromeVisibility;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)pu_wantsToolbarVisible;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)contentViewControllerForAirPlayController:(id)a0;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (void)_updateSpecIfNeeded;
- (void)finishSession;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)_tapGesture:(id)a0;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (void)_invalidateSpec;
- (void)slideshowSession:(id)a0 stopDisplayingPresentationViewController:(id)a1;
- (void)slideshowSession:(id)a0 startDisplayingPresentationViewController:(id)a1;
- (void)settingsDidFinished:(id)a0;
- (void)couchPotatoPlaybackFinished;
- (id)initWithSession:(id)a0 mode:(unsigned long long)a1;
- (void)_setupChromeBar;
- (void)_setupTapGesture;
- (id)visibleAssets;
- (void)_playerStateButtonTapped:(id)a0;
- (void)_airplayButtonTapped:(id)a0;
- (void)_settingsButtonTapped:(id)a0;
- (void)_handleAppWillResignActiveNotification:(id)a0;
- (void)_handleStateChange;
- (void)_dismissSlideshow;
- (void)_installPresentationController:(id)a0;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)_updateAirplayButton;
- (void)_updatePlaceholder;
- (id)ancestorViewOfInstance:(id)a0;

@end
