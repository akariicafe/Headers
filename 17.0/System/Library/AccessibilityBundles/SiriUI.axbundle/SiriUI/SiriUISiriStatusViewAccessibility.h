@interface SiriUISiriStatusViewAccessibility : __SiriUISiriStatusViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (void)setMode:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFocusRegionFrame;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityPerformMagicTap;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screen:(id)a1 textInputEnabled:(BOOL)a2 configuration:(id)a3;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
