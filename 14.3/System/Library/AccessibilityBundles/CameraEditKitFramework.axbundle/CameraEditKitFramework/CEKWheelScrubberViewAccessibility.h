@interface CEKWheelScrubberViewAccessibility : __CEKWheelScrubberViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (id)_axPhotoFilterName;
- (id)_axPhotoEffect;
- (BOOL)_axIsFilterChooser;
- (void)_axFilterAnnouncement;

@end
