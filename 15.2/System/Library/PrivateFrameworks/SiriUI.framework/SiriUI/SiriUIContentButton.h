@class UIColor;

@interface SiriUIContentButton : UIButton {
    BOOL _isRenderingImageTemplate;
    UIColor *_defaultColorForTemplate;
    UIColor *_highlightColorForTemplate;
    UIColor *_overrideTextColor;
}

@property (nonatomic) BOOL usePlatterStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;

+ (id)button;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;
+ (id)buttonWithImageMask:(id)a0 style:(long long)a1;
+ (id)buttonWithImageTemplate:(id)a0 style:(long long)a1;
+ (id)buttonWithImageMask:(id)a0;
+ (id)buttonWithImageTemplate:(id)a0;

- (void)setHighlighted:(BOOL)a0;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setOverrideTextColor:(id)a0;
- (void)_setIsRenderingImageTemplate:(BOOL)a0;
- (void)setDefaultColorForTemplate:(id)a0;
- (void)setHighlightColorForTemplate:(id)a0;
- (void)_updateStyling;

@end
