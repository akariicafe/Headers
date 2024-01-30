@interface PLExpandableImageViewAccessibility : __PLExpandableImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityElementStoredUserLabel;
- (id)_axMainAssetURL;
- (id)_axExifLabel;
- (id)_axSourceObject;

@end
