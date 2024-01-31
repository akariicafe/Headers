@interface PosterRackCollectionViewAccessibility : __PosterRackCollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (id)_axCenteredPoster;
- (id)_axCollectionViewController;
- (BOOL)_axIsPosterSwitcher;

@end
