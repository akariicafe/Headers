@class SBHAddWidgetSheetAppCollectionViewCellConfigurator, SBHApplicationWidgetCollection, UIPageControl, NSMutableArray, SBHAddWidgetDetailsSheetPageViewController, UIButton, NSString, SBHAddWidgetButton, MTMaterialView, UIStackView, SBFFluidBehaviorSettings, BSUIScrollView, SBHAddWidgetSheetAppCollectionViewCell;
@protocol SBIconViewProviding, SBIconListLayoutProvider, SBHWidgetDragHandling, SBHAddWidgetSheetViewControllerDelegate;

@interface SBHAddWidgetDetailSheetViewController : UIViewController <BSUIScrollViewDelegate, SBHWidgetWrapperViewControllerDelegate, SBHWidgetDragHandlerPassing>

@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) SBHAddWidgetSheetAppCollectionViewCellConfigurator *appCellConfigurator;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) SBHAddWidgetSheetAppCollectionViewCell *headerCell;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIStackView *widgetInfoStackView;
@property (retain, nonatomic) BSUIScrollView *widgetInfoScrollView;
@property (retain, nonatomic) BSUIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *avocadosStackView;
@property (retain, nonatomic) SBHAddWidgetButton *addButton;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) SBFFluidBehaviorSettings *widgetInfoScrollViewAnimationSettings;
@property (retain, nonatomic) NSMutableArray *pages;
@property (nonatomic) BOOL scrollingInitiatedByInfoScrollView;
@property (weak, nonatomic) id<SBHAddWidgetSheetViewControllerDelegate> delegate;
@property (retain, nonatomic) SBHApplicationWidgetCollection *applicationWidgetCollection;
@property (readonly, nonatomic) SBHAddWidgetDetailsSheetPageViewController *currentPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_addPage:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)closeButtonTapped:(id)a0;
- (void)pageControlChanged:(id)a0;
- (id)widgetInfoViews;
- (void)loadView;
- (void)_scrollToPageIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateBackgroundRecipe;
- (id)_currentGalleryItem;
- (void)_updateControlsForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateParallaxEffect;
- (void)_updatePageViewControllerAppearanceForNormalScroll;
- (void)_scrollMainScrollViewToMatchInfoScrollViewIfNeeded;
- (unsigned long long)_pageIndexAtContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_updatePageViewControllerAppearanceWithAppearedBlock:(id /* block */)a0;
- (unsigned long long)_closestPageWithGalleryItem:(id)a0;
- (void)_updatePageViewControllerAppearanceForFastScrollToTargetIndex:(unsigned long long)a0;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 appCellConfigurator:(id)a2;
- (void)configureForGalleryItem:(id)a0 selectedSizeClass:(long long)a1;
- (void)_createConstraints;
- (void)_createViews;
- (void)viewWillAppear:(BOOL)a0;
- (void)addButtonTapped:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)traitCollectionDidChange:(id)a0;

@end
