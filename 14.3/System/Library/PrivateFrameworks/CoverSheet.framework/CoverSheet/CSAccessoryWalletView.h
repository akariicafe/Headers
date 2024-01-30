@class CALayer, CABackdropLayer, CSRingLayer;

@interface CSAccessoryWalletView : CSAccessoryView

@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *trackRingBlurBackdropLayer;
@property (retain, nonatomic) CSRingLayer *trackRingBlurLayer;
@property (retain, nonatomic) CALayer *walletLayer;
@property (retain, nonatomic) CSRingLayer *trackRing;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)cornersToMask;
- (void)_presentAnimation;
- (void)_dismissAnimation;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (double)animationDurationBeforeDismissal;

@end
