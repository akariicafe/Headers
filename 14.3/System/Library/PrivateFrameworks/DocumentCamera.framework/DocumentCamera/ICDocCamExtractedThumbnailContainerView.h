@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)orderNextForAccessibility:(id)a0;
- (BOOL)orderPreviousForAccessibility:(id)a0;

@end
