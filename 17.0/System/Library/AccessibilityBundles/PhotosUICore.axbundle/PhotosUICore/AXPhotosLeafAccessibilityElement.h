@interface AXPhotosLeafAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id leaf;

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityCustomRotors;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (unsigned long long)_accessibilityAutomationType;
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
