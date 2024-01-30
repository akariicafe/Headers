@interface UIScrollBarIndicatorAccessibilityElement : UIAccessibilityElement {
    long long _orientation;
}

- (BOOL)_accessibilityIsScrollBarIndicator;
- (long long)_accessibilityOrientation;

@end
