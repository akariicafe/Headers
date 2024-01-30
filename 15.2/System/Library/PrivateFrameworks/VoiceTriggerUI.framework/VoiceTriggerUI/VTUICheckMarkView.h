@class UIColor, VTUIColorLayer, CALayer, UIView;

@interface VTUICheckMarkView : UIView {
    float _phase;
    UIColor *_blueColor;
    UIColor *_redColor;
    UIView *_blueView;
    UIView *_greenView;
    UIView *_redView;
}

@property (retain, nonatomic) CALayer *checkMaskLayer;
@property (retain, nonatomic) CALayer *xMaskLayer;
@property (retain, nonatomic) VTUIColorLayer *colorLayer;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)animateForSuccess:(BOOL)a0 completion:(id /* block */)a1;

@end
