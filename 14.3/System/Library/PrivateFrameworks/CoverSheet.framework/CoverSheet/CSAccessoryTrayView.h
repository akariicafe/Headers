@class CALayer, CABackdropLayer, CSRingLayer;

@interface CSAccessoryTrayView : CSAccessoryView

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

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_presentAnimation;
- (void)_dismissAnimation;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (double)animationDurationBeforeDismissal;
- (double)_trackRingLineWidthAnimationOffset;
- (id)initWithTrayColor:(id)a0;

@end
