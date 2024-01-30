@interface ARCoachingControlBlurredBackgroundView : UIVisualEffectView

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long controlStyle;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)selectedEffectsForDarkModeStyle;
+ (id)selectedEffects;
+ (id)disabledEffectsForARStyle;
+ (id)disabledEffectsForStudioStyle;
+ (id)disabledSelectedEffects;
+ (id)highlightedEffectsForARStyle;
+ (id)highlightedEffectsForStudioStyle;
+ (id)normalEffectsForARDarkStyle;
+ (id)normalEffectsForARStyle;
+ (id)normalEffectsForDarkModeStyle;
+ (id)normalEffectsForStudioStyle;
+ (id)selectedEffectsForARDarkStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(long long)a1 controlStyle:(long long)a2;
- (void)updateBackgroundEffects;

@end
