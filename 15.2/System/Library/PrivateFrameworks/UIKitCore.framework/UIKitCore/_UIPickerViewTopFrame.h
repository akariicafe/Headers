@class UIImage;

@interface _UIPickerViewTopFrame : UIView {
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    double _inset;
    double _shift;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInset:(double)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setShift:(double)a0;
- (void)setLeftImage:(id)a0 middleImage:(id)a1 rightImage:(id)a2;

@end
