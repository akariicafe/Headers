@class UIWindow, SBHIconImageCache, ATXAppDirectoryClient, UITapGestureRecognizer, _UILegibilitySettings, UIView, NSString, NSSet, SBHIconModel, SBRootFolder, SBFolderIconImageCache, SBHLibraryCategoriesFolderDataSource, NSArray, SBHLibraryCategoryMap, SBIconListView;
@protocol SBHLibraryPodFolderControllerDelegate, BSUIScrollViewDelegate, SBIconListLayoutProvider;

@interface SBHLibraryPodFolderController : SBFolderController <SBHLibraryCategoriesFolderDataSourceObserver, UIGestureRecognizerDelegate, SBHLibraryChildViewController, SBHLibraryPodIconZoomAnimationContaining, SBHLibrarySearchControllerContentViewControllerScrollViewProvider>

@property (readonly, nonatomic) UITapGestureRecognizer *tapToDismissRecognizer;
@property (readonly, nonatomic) ATXAppDirectoryClient *loggingClient;
@property (retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap;
@property (readonly, nonatomic) SBHLibraryCategoriesFolderDataSource *dataSource;
@property (weak, nonatomic) id<SBHLibraryPodFolderControllerDelegate> podFolderControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBRootFolder *rootFolder;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, nonatomic) SBIconListView *dockIconListView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (weak, nonatomic) id<BSUIScrollViewDelegate> librarySearchControllerScrollViewDelegate;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;

- (BOOL)isOpen;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (Class)controllerClassForFolder:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (BOOL)isPresentingIconLocation:(id)a0;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_isViewControllerVisible;
- (void)_reloadAppIcons;
- (id)contentScrollView;
- (id)firstIconViewForIcon:(id)a0;
- (void)viewDidLoad;
- (id)iconViewForIcon:(id)a0 location:(id)a1 options:(unsigned long long)a2;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (BOOL)isDisplayingIconView:(id)a0;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setContentAlpha:(double)a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (id)_nestingViewControllerForPushing;
- (BOOL)_ourFolderContainsFolder:(id)a0;
- (void)categoriesDataSource:(id)a0 shouldAnimateLayoutForCategories:(id)a1;
- (void)categoriesDataSourceNeedsAnimatedReload:(id)a0;
- (void)configureInnerFolderControllerConfiguration:(id)a0;
- (void)enumerateNonSuggestionsOrRecentsViewControllersUsingBlock:(id /* block */)a0;
- (void)enumerateViewControllersUsingBlock:(id /* block */)a0;
- (id)firstNonSuggestionsOrRecentsIconViewForIcon:(id)a0;
- (id)folderIconViewForIcon:(id)a0 folderRelativeIconIndexPath:(id *)a1;
- (void)iconViewDidHandleTap:(id)a0;
- (id)podFolderView;
- (void)pushNestedViewController:(id)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)shouldOpenFolderIcon:(id)a0;

@end
