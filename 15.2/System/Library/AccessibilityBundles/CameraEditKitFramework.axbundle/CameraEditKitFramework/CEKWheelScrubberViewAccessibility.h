@interface CEKWheelScrubberViewAccessibility : __CEKWheelScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (id)_axPhotoFilterName;
- (id)_axPhotoEffect;
- (BOOL)_axIsFilterChooser;
- (void)_axFilterAnnouncement;

@end
