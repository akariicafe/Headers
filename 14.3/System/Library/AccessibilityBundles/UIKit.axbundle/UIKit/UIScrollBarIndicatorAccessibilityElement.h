@interface UIScrollBarIndicatorAccessibilityElement : UIAccessibilityElement

@property (nonatomic) long long orientation;

- (long long)_accessibilityOrientation;
- (BOOL)_accessibilityIsScrollBarIndicator;

@end
