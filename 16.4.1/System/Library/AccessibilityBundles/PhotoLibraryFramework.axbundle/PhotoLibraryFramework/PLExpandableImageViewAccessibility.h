@interface PLExpandableImageViewAccessibility : __PLExpandableImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityURL;
- (BOOL)_accessibilityScrollToVisible;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_axSourceObject;
- (id)_axMainAssetURL;
- (id)_axExifLabel;

@end
