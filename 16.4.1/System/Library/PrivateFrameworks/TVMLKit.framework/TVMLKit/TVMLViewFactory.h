@interface TVMLViewFactory : NSObject

+ (id)_organizerViewWithElement:(id)a0 elements:(id)a1 existingView:(id)a2;
+ (id)buttonForElement:(id)a0 existingView:(id)a1;
+ (id)buttonLockupForElement:(id)a0 existingView:(id)a1;
+ (id)imageStackViewWithElement:(id)a0 existingView:(id)a1;
+ (id)imageStackViewWithElement:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)imageViewWithElement:(id)a0 existingView:(id)a1;
+ (id)imageViewWithElement:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)organizerViewWithElements:(id)a0 existingView:(id)a1;

- (id)init;
- (id)_buttonForElement:(id)a0 existingView:(id)a1;
- (id)_activityIndicatorViewForElement:(id)a0 existingView:(id)a1;
- (id)_buttonLockupForElement:(id)a0 existingView:(id)a1;
- (id)_cardViewFromElement:(id)a0 existingView:(id)a1;
- (id)_headerColumnViewForElement:(id)a0 existingView:(id)a1;
- (id)_imageViewForBadgeElement:(id)a0 existingView:(id)a1;
- (id)_imageViewForElement:(id)a0 layout:(id)a1 existingView:(id)a2;
- (id)_labelViewForElement:(id)a0 existingView:(id)a1;
- (id)_listItemLockupWithElement:(id)a0 existingView:(id)a1;
- (id)_loadingImageViewForElement:(id)a0 existingView:(id)a1;
- (id)_monogramViewForElement:(id)a0 layout:(id)a1 existingView:(id)a2;
- (id)_organizerViewForElement:(id)a0 existingView:(id)a1;
- (id)_progressBarFromElement:(id)a0 existingView:(id)a1;
- (id)_ratingBadgeFromElement:(id)a0 existingView:(id)a1;
- (void)_registerViewCreators;
- (id)_rowViewForElement:(id)a0 existingView:(id)a1;
- (id)_seasonsBadgeWithElement:(id)a0 existingView:(id)a1;
- (id)_segmentedControlForElement:(id)a0 existingView:(id)a1;
- (id)_separatorViewForElement:(id)a0 existingView:(id)a1;
- (id)_textBoxViewForElement:(id)a0 existingView:(id)a1;
- (id)_textViewWithElement:(id)a0 existingView:(id)a1;
- (id)_zoomableTextViewFromElement:(id)a0 alwaysFocusable:(BOOL)a1 existingView:(id)a2;

@end
