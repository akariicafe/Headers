@class NSString, NSMutableDictionary, PXMemoriesFeedWidgetDataSourceManager, PXProgrammaticNavigationDestination, PXGadgetSpec;
@protocol PXUIViewControllerZoomTransitionEndPoint, PXGadgetDelegate;

@interface PXMemoryRowGadget : UIViewController <PXSectionedDataSourceManagerObserver, PXForYouMemoriesViewControllerDelegate, PXUIViewControllerZoomTransitionEndPoint, PXProgrammaticNavigationParticipant, PXGadget> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableDictionary *viewControllerEntries;
@property (nonatomic) long long currentVisibility;
@property (retain, nonatomic) id<PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint;
@property (nonatomic) unsigned long long currentNumberOfColumns;
@property (nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })dataSourceRangeForRowType:(unsigned long long)a0 currentVisibility:(long long)a1;
+ (unsigned long long)numberOfColumnsForCurrentVisibility:(long long)a0 rowType:(unsigned long long)a1 numberOfMemories:(unsigned long long)a2;
+ (long long)visibilityForGadgetSpec:(id)a0 numberOfMemories:(unsigned long long)a1;

- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)userDidSelectAccessoryButton:(id)a0;
- (id)uniqueGadgetIdentifier;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateIfNeeded;
- (id)contentViewController;
- (void)_updateVisibilityIfNeeded;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)px_endPointForTransition:(id)a0;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (id)initWithDataSourceManager:(id)a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)a0;
- (void)forYouMemoriesViewController:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2;
- (void)forYouMemoriesViewController:(id)a0 configureMetrics:(id)a1;
- (void)_dismissIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateScrollingBehaviorIfNeeded;
- (void)_configureMetricsForSingleRow:(id)a0 dataSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_configureMetricsForMultiRow:(id)a0 dataSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_transitionFromCurrentVisibility:(long long)a0 toNewVisibility:(long long)a1;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)a0;
- (void)_refreshViewControllerForRowType:(unsigned long long)a0 visibility:(long long)a1;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)a0;
- (void)_updateScrollingBehaviorForRowType:(unsigned long long)a0;
- (BOOL)_shouldPageForRowType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForRowType:(unsigned long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_columnSpanForRowType:(unsigned long long)a0;

@end
