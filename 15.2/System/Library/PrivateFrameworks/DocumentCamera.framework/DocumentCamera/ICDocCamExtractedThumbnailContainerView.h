@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)orderNextForAccessibility:(id)a0;
- (BOOL)orderPreviousForAccessibility:(id)a0;

@end
