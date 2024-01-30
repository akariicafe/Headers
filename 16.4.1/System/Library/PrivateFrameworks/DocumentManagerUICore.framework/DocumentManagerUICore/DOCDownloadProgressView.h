@class UITapGestureRecognizer, UIColor, NSProgress, NSOperationQueue, DOCDeterminateProgressRingView, DOCIndeterminateProgressRingView, DOCGhostRingView;

@interface DOCDownloadProgressView : UIView {
    NSOperationQueue *_pendingAnimationQueue;
}

@property (retain, nonatomic) DOCGhostRingView *ghostRingView;
@property (retain, nonatomic) DOCDeterminateProgressRingView *determinateProgressRingView;
@property (retain, nonatomic) DOCIndeterminateProgressRingView *indeterminateProgressRingView;
@property (nonatomic) double progress;
@property (nonatomic) BOOL graduallyIncreasingProgress;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) UIColor *inactiveStrokeColor;
@property (copy, nonatomic) UIColor *activeStrokeColor;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL canShowStopButton;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleTap:(id)a0;
- (void)_addToPendingAnimationQueue:(id /* block */)a0;
- (void)_setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateStatusPropertiesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)animateToFullRingAndHideWithCompletion:(id /* block */)a0;
- (void)beginGraduallyIncreasingProgress;
- (void)fadeoutWithCompletion:(id /* block */)a0;

@end
