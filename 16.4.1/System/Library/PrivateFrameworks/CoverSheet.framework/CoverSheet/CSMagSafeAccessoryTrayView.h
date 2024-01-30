@class CALayer, CABackdropLayer, CSRingLayer;

@interface CSMagSafeAccessoryTrayView : CSMagSafeAccessoryView

@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer;
@property (retain, nonatomic) CALayer *splashRing1;
@property (retain, nonatomic) CALayer *splashRing2;
@property (retain, nonatomic) CALayer *splashRing3;
@property (retain, nonatomic) CALayer *splashRing4;
@property (retain, nonatomic) CABackdropLayer *trackRingBlurBackdropLayer;
@property (retain, nonatomic) CSRingLayer *trackRingBlurLayer;
@property (retain, nonatomic) CSRingLayer *trackRing;
@property (nonatomic) BOOL clearColorAnimationNeeded;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_dismissAnimation;
- (void)_presentAnimation;
- (double)_trackRingLineWidthAnimationOffset;
- (double)animationDurationBeforeDismissal;
- (id)initWithTrayColor:(id)a0;

@end
