@class UIView;

@interface NTKEditOptionPickerSideView : UIView {
    double _contentAlpha;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _contentTransform;
}

@property (retain, nonatomic) UIView *optionView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)applyContentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setRotationFromFront:(double)a0;

@end
