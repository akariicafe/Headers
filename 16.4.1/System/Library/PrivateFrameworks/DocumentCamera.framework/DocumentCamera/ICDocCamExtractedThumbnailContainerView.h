@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (BOOL)orderNextForAccessibility:(id)a0;
- (BOOL)orderPreviousForAccessibility:(id)a0;

@end
