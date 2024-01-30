@protocol AXScrollIndicatorDelegate;

@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

@property (weak, nonatomic) id<AXScrollIndicatorDelegate> accessibilityScrollIndicatorDelegate;
@property (nonatomic) long long accessibilityScrollDirection;
@property (nonatomic) BOOL accessibilityScrollIndicatorIsFocused;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (long long)_accessibilitySortPriority;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)_accessibilityCanAppearInContextMenuPreview;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityUserInputLabels;
- (BOOL)_accessibilityOverridesInvisibility;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (id)_axBasicDescription;

@end
