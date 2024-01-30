@class VKCImageAnalysis, NSArray, NSString, NSMutableArray;
@protocol VKCVisualSearchCornerViewDelegate;

@interface VKCVisualSearchCornerView : VKCTappableView <VKCCornerLookupButtonDelegate>

@property (retain, nonatomic) NSArray *cornerResultItems;
@property (retain, nonatomic) NSMutableArray *cornerButtons;
@property (copy, nonatomic) NSString *_customAnalyticsIdentifier;
@property (readonly, nonatomic) double windowScale;
@property (readonly, nonatomic) double buttonSpacing;
@property (retain, nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleRect;
@property (weak, nonatomic) id<VKCVisualSearchCornerViewDelegate> delegate;

- (void)_updateButtonFramesWithScale:(double)a0;
- (void)_showCornerLookupButtonsForResults:(id)a0;
- (void)automaticallyShowVisualSearchResultsIfApplicable;
- (void)lookupButton:(id)a0 didProcessResultWithDuration:(double)a1;
- (void)lookupButton:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)a0 userFeedbackPayload:(id)a1 sfReportData:(id)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)a0 duration:(double)a1;
- (void)showVisualSearchResultView;
- (id)_resultItems;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_itemObscuredByViewport:(id)a0;
- (void)invalidateButtonsForResults;
- (void)lookupButtonDidDismissController:(id)a0;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_contentSizeChanged:(id)a0;
- (void)addMetadataToVSFeedbackItem:(id)a0;
- (void).cxx_destruct;

@end
