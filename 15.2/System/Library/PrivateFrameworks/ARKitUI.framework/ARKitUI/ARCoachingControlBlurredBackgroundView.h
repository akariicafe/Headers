@interface ARCoachingControlBlurredBackgroundView : UIVisualEffectView

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long controlStyle;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)selectedEffectsForARDarkStyle;
+ (id)normalEffectsForARDarkStyle;
+ (id)selectedEffectsForDarkModeStyle;
+ (id)normalEffectsForDarkModeStyle;
+ (id)selectedEffects;
+ (id)disabledSelectedEffects;
+ (id)disabledEffectsForStudioStyle;
+ (id)disabledEffectsForARStyle;
+ (id)highlightedEffectsForStudioStyle;
+ (id)highlightedEffectsForARStyle;
+ (id)normalEffectsForStudioStyle;
+ (id)normalEffectsForARStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundStyle:(long long)a1 controlStyle:(long long)a2;
- (void)updateBackgroundEffects;

@end
