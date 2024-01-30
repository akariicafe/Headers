@class NSString, NSMutableSet, NSMutableArray, VKCVisualSearchResult;
@protocol VKCImageVisualSearchViewDelegate;

@interface VKCImageVisualSearchView : VKCImageBaseOverlayView <VKCVisualSearchResultItemViewDelegate>

@property (retain, nonatomic) NSMutableArray *resultViews;
@property (nonatomic) BOOL shouldAutomaticallyShowVisualSearchResult;
@property (retain, nonatomic) NSMutableSet *cachedResultItemsWithFocalDot;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;
@property (weak, nonatomic) id<VKCImageVisualSearchViewDelegate> delegate;
@property (nonatomic) BOOL didAddVisualSearchCornerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)hideDots;
- (void)triggerTapToRadar;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)a0 duration:(double)a1;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)a0;
- (void)automaticallyShowVisualSearchResults;
- (BOOL)containsVisualSearchItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showTopVisualSearchResult;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutResultViews;
- (void)updateUIForVisualSearchResultsClearExistingResults:(BOOL)a0;
- (void)animateDotsIn;
- (BOOL)_shouldShowPulsingDot:(id)a0;
- (id)topResultView;
- (BOOL)visualSearchItemView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)visualSearchItemView:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)visualSearchItemViewDidDismissController:(id)a0;
- (void)visualSearchItemView:(id)a0 didProcessResultsWithDuration:(double)a1;

@end
