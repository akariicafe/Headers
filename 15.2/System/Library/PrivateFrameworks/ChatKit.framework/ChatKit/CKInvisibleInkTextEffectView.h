@class CAEmitterLayer, UITextView, CKTextBalloonView, NSArray, CALayer, NSString;

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>

@property (weak, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) CAEmitterLayer *textDrawEmitterLayer;
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer;
@property (retain, nonatomic) NSArray *dustEmitterLayers;
@property (retain, nonatomic) CAEmitterLayer *dustDrawEmitterLayer;
@property (nonatomic) BOOL blendingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)dustEmitter;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setSuspended:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)endDustEmitterLayerFingerEffects:(id)a0;
- (void)updateDustCellColor;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)endTouches;
- (id)createDrawEmitter;
- (void)endDrawEmitterEffects;
- (void)moveEmittersForTouchesBegan:(id)a0;
- (void)moveEmittersWithTouches:(id)a0;
- (void)moveEmittersForTouchesMoved:(id)a0;
- (void)endEmittersForTouchesEnded:(id)a0;
- (void)endEmittersForTouchesCancelled:(id)a0;
- (void)attachToBalloonView:(id)a0;
- (void)detachFromBalloonView;

@end
