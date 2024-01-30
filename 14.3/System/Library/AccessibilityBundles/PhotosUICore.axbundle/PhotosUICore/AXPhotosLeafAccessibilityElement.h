@interface AXPhotosLeafAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id leaf;

+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (unsigned long long)_accessibilityAutomationType;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_accessibilityDefaultFocusGroupDescriptor;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityCustomRotors;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (long long)_accessibilityScannerActivateBehavior;
- (id)initWithAccessibilityContainer:(id)a0 forLeaf:(id)a1;
- (long long)_accessibilityContentKind;
- (id)_axLeafContentView;

@end
