@interface SKUIHorizontalLockupViewAccessibility : __SKUIHorizontalLockupViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)a0;
- (id)_accessibilityFindPlayButton;
- (BOOL)isAdvertisementView:(id)a0;
- (id)_accessibilitySupplementaryFooterViewsIncludePlayButton:(BOOL)a0 includeStyledImageButton:(BOOL)a1;
- (id)_accessibilityFindToggleButton;
- (id)_accessibilityFindStyledImageButton;
- (BOOL)_playAction:(id)a0;
- (BOOL)_styledImageButtonAction:(id)a0;
- (BOOL)_toggleButtonAction:(id)a0;

@end
