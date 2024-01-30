@class PXMemoriesFeedUIViewController, NSString, UIBarButtonItem, PXFetchResultBasedMemoriesDataSourceManager, PXMemoriesUIViewController;

@interface PXTogglingMemoriesViewController : UIViewController <PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint>

@property (retain, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (retain, nonatomic) PXMemoriesUIViewController *favoriteMemoriesViewController;
@property (readonly, nonatomic) PXMemoriesFeedUIViewController *currentViewController;
@property (readonly, nonatomic) NSString *currentBarButtonTitle;
@property (nonatomic, setter=setShouldOnlyShowFavorites:) BOOL onlyShowFavorites;
@property (readonly, nonatomic) UIBarButtonItem *toggleButton;
@property (nonatomic) BOOL hasAnyMemories;
@property (readonly, nonatomic) PXMemoriesFeedUIViewController *memoriesViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;

- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)toggle;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)a0;
- (id)regionOfInterestForTransition:(id)a0;
- (void)prepareForInteractiveTransition:(id)a0;
- (id)px_endPointForTransition:(id)a0;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)a0;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1;
- (void)_configureMemoryViewControllers;
- (void)_configureBarButton;
- (void)_configureTitle;
- (void)_configureTitleInset;
- (void)_reloadCurrentViewController;

@end
