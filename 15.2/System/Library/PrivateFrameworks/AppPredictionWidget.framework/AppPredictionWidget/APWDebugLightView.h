@class UIColor, CADisplayLink, UIView;

@interface APWDebugLightView : UIView {
    UIView *_ledView;
    BOOL _ledIsOn;
    long long _blinkHertz;
    CADisplayLink *_blinkDisplayLink;
}

@property (retain, nonatomic) UIColor *ledColor;

- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)willMoveToWindow:(id)a0;
- (void)turnOff;
- (void)turnOn;
- (void)blink:(long long)a0;
- (void)_displayLinkDidUpdate:(id)a0;
- (void)_startBlinking;
- (void)_stopBlinking;
- (void)_updateLedOnState;

@end
