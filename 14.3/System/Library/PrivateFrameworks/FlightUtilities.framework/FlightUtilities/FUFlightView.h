@class UIPageViewController, UIVisualEffectView, UIPageControl, NSMutableArray, UIView, UIScrollView, NSString, NSLayoutConstraint, FUFLightTrack, TLKProminenceView, NSArray, MKMapView, FUPlaneTrackerAnnotationView;
@protocol FUFlightViewDelegate;

@interface FUFlightView : UIView <UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol> {
    FUPlaneTrackerAnnotationView *_planeTracker;
    NSMutableArray *_tracks;
    FUFLightTrack *_currentTrack;
    NSMutableArray *_controllers;
    UIPageViewController *_pageViewController;
    UIScrollView *_pageViewContainer;
    BOOL _spotlightMode;
    BOOL _landscapeMode;
    NSLayoutConstraint *_pageControllerHeightConstraint;
    NSArray *_allLegs;
}

@property (nonatomic) long long currentFocus;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) UIVisualEffectView *backBlurView;
@property (weak, nonatomic) TLKProminenceView *borderLineViewLandscape;
@property (weak, nonatomic) TLKProminenceView *borderLineViewPortrait;
@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) NSLayoutConstraint *pageContainerHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint1;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint2;
@property (weak, nonatomic) NSLayoutConstraint *lanscapeConstraint3;
@property (weak, nonatomic) NSLayoutConstraint *portraitConstraint1;
@property (retain) UIView *errorView;
@property (retain) UIView *loadingView;
@property (retain, nonatomic) NSArray *flights;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) BOOL highlightCurrentFlightLeg;
@property (nonatomic) BOOL showInfoPanel;
@property (weak) id<FUFlightViewDelegate> delegate;
@property (retain, nonatomic) NSLayoutConstraint *bottomMapConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingMapConstraint;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } mapInsets;
@property (nonatomic) BOOL ignoreMapUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (void)updateConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)awakeFromNib;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)didMoveToWindow;
- (void)updateMapAppearance;
- (void)layoutSubviews;
- (BOOL)preservesSuperviewLayoutMargins;
- (void)addTrack:(id)a0;
- (BOOL)mapOnly;
- (void)fitMap:(BOOL)a0;
- (id)allLegs;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)setFlights:(id)a0 selectedFlight:(long long)a1 selectedLeg:(long long)a2;
- (void)removeMapBackground;
- (void)updateMapCamera;
- (void)showLoading;
- (void)showError;
- (void)showInfo;
- (void)flightInfoView:(id)a0 didUpdateFocus:(long long)a1;
- (void)setupStyles;
- (BOOL)landscapeMode;
- (void)updatePageControllerScrolling;
- (void)updateOrientationConstraints;
- (void)updateBorderLines;
- (BOOL)landscapeModeForTraits:(id)a0;
- (id)currentFlight;
- (void)updateMapArcs;
- (id)currentLeg;
- (id)infoViewControllerCreate;
- (void)cleanupView;
- (unsigned long long)absoluteLegIndex;
- (void)setAbsoluteIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (id)departureCamera;
- (id)arrivalCamera;
- (BOOL)hasFollowupContent:(id)a0;
- (id)flightForLeg:(id)a0;
- (id)flightCamera;
- (void)changeCurrentPage:(id)a0;

@end
