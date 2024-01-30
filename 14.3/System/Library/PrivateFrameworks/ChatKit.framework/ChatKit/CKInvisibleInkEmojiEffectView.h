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

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)displayLayer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)endTouches;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (void)endDustEmitterLayerFingerEffects;
- (void)disableBlending;
- (void)endDrawEmitterEffects;
- (void)enableBlending;
- (void)moveEmittersForTouchesBegan:(id)a0;
- (void)moveEmittersWithTouches:(id)a0;
- (void)moveEmittersForTouchesMoved:(id)a0;
- (void)attachToBalloonView:(id)a0;
- (void)endEmittersForTouchesEnded:(id)a0;
- (void)endEmittersForTouchesCancelled:(id)a0;
- (void)detachFromBalloonView;
- (void)setSuspended:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
