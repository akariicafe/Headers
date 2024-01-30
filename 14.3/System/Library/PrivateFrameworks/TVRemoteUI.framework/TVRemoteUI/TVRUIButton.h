@class UIColor, _TVRButtonHaptic, UIImageView, UIViewPropertyAnimator, UILabel, NSString;

@interface TVRUIButton : UIControl <_UICursorInteractionDelegate>

@property (retain, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *unhighlightAnimator;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) _TVRButtonHaptic *haptic;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic, getter=hasTapAction) BOOL tapAction;
@property (nonatomic, getter=isHighlightEffectDisabled) BOOL disableHighlightEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidButtonType:(long long)a0;
+ (BOOL)buttonTypeHasTapAction:(long long)a0;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_touchDown:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_touchUp:(id)a0;
- (id)initWithType:(long long)a0 hasTapAction:(BOOL)a1;

@end
