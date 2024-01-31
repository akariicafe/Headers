@interface MFTiltedTabViewAccessibility : __MFTiltedTabViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (void)setPresented:(BOOL)a0 animated:(BOOL)a1;

@end
