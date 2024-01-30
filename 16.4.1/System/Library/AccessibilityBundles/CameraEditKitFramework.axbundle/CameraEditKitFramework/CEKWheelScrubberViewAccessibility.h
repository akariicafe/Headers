@interface CEKWheelScrubberViewAccessibility : __CEKWheelScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (void)_axFilterAnnouncement;
- (BOOL)_axIsFilterChooser;
- (id)_axPhotoEffect;
- (id)_axPhotoFilterName;

@end
