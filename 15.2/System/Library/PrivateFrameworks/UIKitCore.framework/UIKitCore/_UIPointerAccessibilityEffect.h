@interface _UIPointerAccessibilityEffect : UIPointerHoverEffect

+ (BOOL)shouldApplyAccessibilityEffect;

- (BOOL)prefersShadow;
- (BOOL)prefersScaledContent;
- (id)init;

@end
