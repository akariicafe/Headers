@interface AXPhotosLeafAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id leaf;

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityURL;
- (id)accessibilityCustomContent;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomRotors;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityScannerActivateBehavior;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (id)_accessibilityDefaultFocusGroupIdentifier;
- (id)initWithAccessibilityContainer:(id)a0 forLeaf:(id)a1;
- (long long)_accessibilityContentKind;
- (id)_axLeafView;
- (id)_axLeafAsset;
- (id)_axLeafContentView;

@end
