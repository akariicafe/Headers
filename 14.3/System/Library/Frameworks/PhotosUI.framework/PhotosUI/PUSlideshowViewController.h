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

- (void)_updateChromeVisibility;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (id)initWithSession:(id)a0;
- (void)_tapGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_setNeedsUpdate;
- (void)dealloc;
- (void)_doneButtonTapped:(id)a0;
- (void)_airplayButtonTapped:(id)a0;
- (void)_updateAirplayButton;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)loadView;
- (BOOL)_needsUpdate;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateIfNeeded;
- (id)initWithCoder:(id)a0;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)contentViewControllerForAirPlayController:(id)a0;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)pu_wantsToolbarVisible;
- (void)_updateSpecIfNeeded;
- (void)slideshowSession:(id)a0 stopDisplayingPresentationViewController:(id)a1;
- (void)slideshowSession:(id)a0 startDisplayingPresentationViewController:(id)a1;
- (void)settingsDidFinished:(id)a0;
- (void)couchPotatoPlaybackFinished;
- (void)_setupChromeBar;
- (id)initWithSession:(id)a0 mode:(unsigned long long)a1;
- (void)_setupTapGesture;
- (id)visibleAssets;
- (void)_playerStateButtonTapped:(id)a0;
- (void)_settingsButtonTapped:(id)a0;
- (void)_handleAppWillResignActiveNotification:(id)a0;
- (void)_handleStateChange;
- (void)_dismissSlideshow;
- (void)_installPresentationController:(id)a0;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)_updatePlaceholder;
- (id)ancestorViewOfInstance:(id)a0;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (void)viewDidLoad;
- (void)_invalidateSpec;
- (void)finishSession;
- (void)viewWillLayoutSubviews;

@end
