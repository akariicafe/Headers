@interface CEKWheelScrubberViewAccessibility : __CEKWheelScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (void)_axFilterAnnouncement;
- (BOOL)_axIsFilterChooser;
- (id)_axPhotoEffect;
- (id)_axPhotoFilterName;

@end
