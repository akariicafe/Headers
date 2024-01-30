@interface PURedEyeIndicatorView : UIView

@property (nonatomic) unsigned long long animationType;

- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)animateWithDelay:(double)a0 completion:(id /* block */)a1;

@end
