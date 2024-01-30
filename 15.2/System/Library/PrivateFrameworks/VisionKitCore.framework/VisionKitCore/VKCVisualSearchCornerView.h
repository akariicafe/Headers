@class NSArray, NSString, VKImageAnalysis, NSMutableArray;
@protocol VKCVisualSearchCornerViewDelegate;

@interface VKCVisualSearchCornerView : VKCTappableView <VKCCornerLookupButtonDelegate>

@property (retain, nonatomic) NSArray *cornerResultItems;
@property (retain, nonatomic) NSMutableArray *cornerButtons;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleScrollViewUnitRect;
@property (copy, nonatomic) NSString *_customAnalyticsIdentifier;
@property (readonly, nonatomic) double buttonSpacing;
@property (retain, nonatomic) VKImageAnalysis *analysis;
@property (weak, nonatomic) id<VKCVisualSearchCornerViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_contentSizeChanged:(id)a0;
- (void)scrollViewDidZoomToUnitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_resultItems;
- (void)showVisualSearchResultView;
- (void)lookupButton:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)lookupButtonDidDismissController:(id)a0;
- (void)lookupButton:(id)a0 didProcessResultWithDuration:(double)a1;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_showCornerLookupButtonsForResults:(id)a0;
- (BOOL)_itemObscuredByViewport:(id)a0;
- (void)invalidateButtonsForResults;
- (void)_updateButtonFrames;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)a0 duration:(double)a1;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)a0;
- (void)automaticallyShowVisualSearchResultsIfApplicable;

@end
