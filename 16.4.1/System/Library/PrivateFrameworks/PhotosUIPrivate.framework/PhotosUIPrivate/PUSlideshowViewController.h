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

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (id)initWithCoder:(id)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)_setNeedsUpdate;
- (void)_tapGesture:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_updateChromeVisibility;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithSession:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonTapped:(id)a0;
- (void)_updatePlaceholder;
- (void)_invalidateSpec;
- (void)_updateSpecIfNeeded;
- (void)_setupChromeBar;
- (void)_installPresentationController:(id)a0;
- (void)_airplayButtonTapped:(id)a0;
- (void)_dismissSlideshow;
- (void)_handleAppWillResignActiveNotification:(id)a0;
- (void)_handleStateChange;
- (void)_playerStateButtonTapped:(id)a0;
- (void)_removeCurrentPresentationController;
- (void)_removeSlideshowSettingsViewController;
- (void)_settingsButtonTapped:(id)a0;
- (void)_setupTapGesture;
- (void)_updateAirplayButton;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;
- (id)ancestorViewOfInstance:(id)a0;
- (id)contentViewControllerForAirPlayController:(id)a0;
- (void)couchPotatoPlaybackFinished;
- (void)finishSession;
- (id)initWithSession:(id)a0 mode:(unsigned long long)a1;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)settingsDidFinished:(id)a0;
- (void)slideshowSession:(id)a0 startDisplayingPresentationViewController:(id)a1;
- (void)slideshowSession:(id)a0 stopDisplayingPresentationViewController:(id)a1;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (id)visibleAssets;

@end
