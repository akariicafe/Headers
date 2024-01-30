@class UITextView, CAEmitterLayer, NSString, CALayer;

@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) CALayer *emojiContainerLayer;
@property (retain, nonatomic) CALayer *emojiLayer;
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer;
@property (retain, nonatomic) CALayer *dustContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer;
@property (retain, nonatomic) CALayer *blurredEmojiLayer;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) BOOL blendingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayLayer:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPaused:(BOOL)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setSuspended:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)disableBlending;
- (void)endEmittersForTouchesCancelled:(id)a0;
- (void)attachToBalloonView:(id)a0;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (void)detachFromBalloonView;
- (void)enableBlending;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterLayerFingerEffects;
- (void)endEmittersForTouchesEnded:(id)a0;
- (void)endTouches;
- (void)moveEmittersForTouchesBegan:(id)a0;
- (void)moveEmittersForTouchesMoved:(id)a0;
- (void)moveEmittersWithTouches:(id)a0;

@end
