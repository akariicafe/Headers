@class _UILegibilitySettings, SBUILegibilityLabel, _UILegibilityView, UIView, CALayer;

@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView

@property (retain, nonatomic) _UILegibilityView *arrowHead;
@property (retain, nonatomic) _UILegibilityView *arrowTail;
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel;
@property (retain, nonatomic) UIView *arrowContainer;
@property (retain, nonatomic) CALayer *maskContainerLayer;
@property (retain, nonatomic) CALayer *maskTopLayer;
@property (retain, nonatomic) CALayer *maskLeftLayer;
@property (retain, nonatomic) CALayer *maskRightLayer;
@property (retain, nonatomic) UIView *localRotationView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } localTransform;
@property (nonatomic) unsigned long long state;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0 delay:(double)a1;
- (void)_updateCallToActionLabelFont;
- (void)_installMask;
- (void)_flyInWithText:(BOOL)a0 delay:(double)a1;
- (void)_fadeComponentsIn:(id)a0 completion:(id /* block */)a1;
- (void)_fadeComponenetsOut:(id)a0 completion:(id /* block */)a1;
- (void)_removeAnimations;
- (void)_setAlpha:(double)a0 onComponents:(id)a1 completion:(id /* block */)a2;

@end
