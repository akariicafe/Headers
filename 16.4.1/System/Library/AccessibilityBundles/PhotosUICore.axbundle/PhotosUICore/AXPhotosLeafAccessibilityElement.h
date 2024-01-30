@interface AXPhotosLeafAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id leaf;

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (id)accessibilityCustomRotors;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (id)_accessibilityDefaultFocusGroupIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (id)_accessibilityPHAssetLocalIdentifier;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_accessibilityPhotoLibraryURL;
- (long long)_accessibilityScannerActivateBehavior;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (long long)_accessibilityContentKind;
- (id)_axLeafAsset;
- (id)_axLeafContentView;
- (id)_axLeafView;
- (id)initWithAccessibilityContainer:(id)a0 forLeaf:(id)a1;

@end
