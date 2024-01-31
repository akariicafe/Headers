@interface SBAppThumbnailGridViewAccessibility : __SBAppThumbnailGridViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)_layoutSubviews:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)removeViewAtIndex:(long long)a0 animate:(BOOL)a1;

@end
