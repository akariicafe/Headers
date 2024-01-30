@interface _UIPointerAccessibilityEffect : UIPointerHoverEffect

+ (BOOL)shouldApplyAccessibilityEffect;

- (id)init;
- (BOOL)prefersShadow;
- (BOOL)prefersScaledContent;

@end
