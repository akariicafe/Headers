@interface OKTransitionParallaxPush : OKTransition

@property (nonatomic) unsigned long long direction;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double fadeFromAlpha;
@property (nonatomic) double fadeToAlpha;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(BOOL)a3 duration:(double)a4 doEaseIn:(BOOL)a5 doEaseOut:(BOOL)a6 isCompleting:(BOOL)a7 wasCancelled:(BOOL)a8 fromProgress:(double)a9 completionHandler:(id /* block */)a10;
- (void)makeCurrentTransitionInteractiveWithContext:(id)a0 andProgress:(double)a1;
- (void)setSettingDirection:(unsigned long long)a0;
- (void)setSettingFadeFromAlpha:(double)a0;
- (void)setSettingFadeToAlpha:(double)a0;
- (void)setSettingParallaxAmount:(double)a0;
- (void)startInteractiveTransitionWithContext:(id)a0;
- (BOOL)tracksWithFinger;
- (void)updateInteractiveTransitionWithContext:(id)a0 andProgress:(double)a1;

@end
