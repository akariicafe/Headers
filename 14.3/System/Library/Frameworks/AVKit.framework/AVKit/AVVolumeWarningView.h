@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (nonatomic, getter=isStopping) BOOL stopping;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimatingAndRemoveFromSuperview;
- (void)continueAnimating;
- (void)startAnimating;

@end
