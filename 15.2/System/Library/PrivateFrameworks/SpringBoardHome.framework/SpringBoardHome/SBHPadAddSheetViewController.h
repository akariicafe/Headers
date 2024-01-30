@class UISplitViewController, SBHWidgetSearchController, SBHAddWidgetSheetViewController, NSArray, UIView, NSMutableDictionary, NSString, MTMaterialView;
@protocol SBHWidgetDragHandling, SBHWidgetSheetViewControllerPresenter;

@interface SBHPadAddSheetViewController : SBHAddWidgetSheetViewControllerBase <SBHAddWidgetSheetViewControllerDelegate, SBHMainAddSheetViewControlling> {
    NSMutableDictionary *_userInfo;
    struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; } _landscapeMetrics;
    struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; } _portraitMetrics;
}

@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) UISplitViewController *splitViewController;
@property (retain, nonatomic) SBHAddWidgetSheetViewController *left;
@property (retain, nonatomic) NSMutableDictionary *suggestedItemsByGalleryLayoutSize;
@property (retain, nonatomic) SBHWidgetSearchController *widgetSearchController;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (retain, nonatomic) UIView *redBox;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *applicationWidgetCollections;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (nonatomic) unsigned long long galleryLayoutSize;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_detailViewController;
- (id)_newBackgroundView;
- (void)addWidgetSheetViewControllerDidCancel:(id)a0;
- (void)addWidgetSheetViewController:(id)a0 didSelectWidgetIconView:(id)a1;
- (id)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(id)a0;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; })a2 appCellConfigurator:(id)a3;
- (void)setSuggestedItems:(id)a0 forGalleryLayoutSize:(unsigned long long)a1;
- (void)_layoutSearchBarGradientMaskLayers;
- (void)addWidgetSheetViewControllerWillAppear:(id)a0;
- (void)addWidgetSheetViewControllerDidAppear:(id)a0;
- (void)addWidgetSheetViewControllerWillDisappear:(id)a0;
- (void)addWidgetSheetViewControllerDidDisappear:(id)a0;
- (struct SBHPadAddWidgetSheetMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct CGSize { double x0; double x1; } x7; unsigned long long x8; })_metricsForOrientation:(long long)a0;
- (id)suggestedItemsForGalleryLayoutSize:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsForSheetPresentationInInterfaceOrientation:(long long)a0;
- (double)_paddedSidebarWidthForInterfaceOrientation:(long long)a0;
- (void)configureViewsForInterfaceOrientation:(long long)a0;
- (double)_columnSpacing;
- (unsigned long long)_numberOfWidgetColumnsForGalleryLayoutSize:(unsigned long long)a0;
- (unsigned long long)_numberOfWidgetColumnsThatFitInWidth:(double)a0;
- (double)_widthNeededForWidgetColumns:(unsigned long long)a0;

@end
