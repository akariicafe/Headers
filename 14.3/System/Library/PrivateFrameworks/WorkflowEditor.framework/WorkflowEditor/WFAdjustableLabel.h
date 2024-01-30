@protocol WFAdjustableLabelDelegate;

@interface WFAdjustableLabel : UILabel

@property (nonatomic) id<WFAdjustableLabelDelegate> adjustableDelegate;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;

@end
