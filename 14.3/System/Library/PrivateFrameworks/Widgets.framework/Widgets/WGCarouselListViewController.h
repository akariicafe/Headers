@class NSString, NSMutableDictionary, WGWidgetPinningTeachingView;

@interface WGCarouselListViewController : WGMajorListViewController <WGWidgetPinningTeachingViewDelegate> {
    id _sizeChangeObserver;
}

@property (nonatomic) double revealProgress;
@property (nonatomic) double dismissProgress;
@property (nonatomic) BOOL visuallyRevealedPriorToEditingIcons;
@property (retain, nonatomic) NSMutableDictionary *catchupProperties;
@property (retain, nonatomic) NSMutableDictionary *catchupTimers;
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible;
@property (retain, nonatomic) WGWidgetPinningTeachingView *teachingView;
@property (retain, nonatomic) NSMutableDictionary *cachedThresholds;
@property (nonatomic) struct WGWidgetListSettings { unsigned long long carouselEdges; BOOL useFavorites; BOOL carouselIgnoresHeader; BOOL pinned; } listSettings;
@property (nonatomic, getter=isRevealed) BOOL revealed;
@property (nonatomic, getter=isVisuallyRevealed) BOOL visuallyRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTeachingViewVisibilityAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_styleHeaderView:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateCarouselEffect;
- (void)setEditingIcons:(BOOL)a0;
- (id)_newCatchupPropertyForCell:(id)a0;
- (void)_styleCroppedAndScaledCellForBottomEdge:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 thresholds:(id)a3;
- (void)setVisuallyRevealed:(BOOL)a0 withSlowAnimation:(BOOL)a1;
- (void)setContainerView:(id)a0;
- (void)updateCarouselAndRevealState;
- (void).cxx_destruct;
- (void)_styleCroppedCellForBottomEdge:(id)a0 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 thresholds:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (double)easedOutValueForValue:(double)a0;
- (id)initWithWidgetDiscoveryController:(id)a0 listSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)_createPropertiesForStackViewUpdate;
- (BOOL)_isViewControllerVisible;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)a0;
- (BOOL)headerVisible;
- (void)widgetPinningTeachingViewDidSelectYes:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (unsigned long long)_indexOfFirstNonFavoritedWidgetInStackView;
- (void)_styleFullyInvisibleTopCell:(id)a0;
- (void)_updateRevealState;
- (id)_identifierForCell:(id)a0;
- (void)_updateScrollViewContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cellFrameInScrollBoundsForCell:(id)a0;
- (unsigned long long)_insertionIndexofListItem:(id)a0 intoWidgetViews:(id)a1 withOrderedIdentifiers:(id)a2;
- (BOOL)shouldAnimateFirstTwoViewsAsOne;
- (void)viewDidAppear:(BOOL)a0;
- (void)_styleDisapearingCellForBottomEdge:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 previousCellFrameInContainerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 thresholds:(id)a3;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldShowTeachingView;
- (void)_styleCroppedAndScaledCellForTopEdge:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 thresholds:(id)a2;
- (void)_styleFullyInvisibleBottomCell:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 thresholds:(id)a2;
- (void)_styleCroppedCellForTopEdge:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 thresholds:(id)a3;
- (void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
- (id)_animatablePropertiesForStackViewUpdate;
- (void)_styleFooterView:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerHeight:(double)a3;
- (void)setHeaderVisible:(BOOL)a0;
- (id)_thresholdsForCell:(id)a0;
- (BOOL)_hasEnoughContentToScroll;
- (void)_styleFullyVisibleCell:(id)a0;
- (id)extraViews;
- (void)_styleTeachingView:(id)a0 withCellFrameInScrollViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)viewDidLoad;
- (unsigned long long)_indexForNextCellAfterContentOffset:(double)a0;
- (void)widgetPinningTeachingViewDidSelectNo:(id)a0;

@end
