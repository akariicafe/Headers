@interface UISplitKeyboardSupportAccessibility : __UISplitKeyboardSupportAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)translateDetected:(id)a0;
- (id)_axLastLocationDescription;
- (id)_axDescriptionForPoint:(struct CGPoint { double x0; double x1; })a0 windowWidth:(double)a1 windowHeight:(double)a2;
- (void)_axSetLastLocationDescription:(id)a0;

@end
