@interface MRUNowPlayingHeaderViewAccessibility : __MRUNowPlayingHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityContainingMRUControlCenterCollectionViewCell;
- (long long)_accessibilityNowPlayingLayout;
- (id)_axMakeNowPlayingHeaderViewElement;

@end
