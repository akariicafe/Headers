@interface MagnifierSupport.RecordButton : UIButton {
    void /* unknown type, empty encoding */ isRecording;
    void /* unknown type, empty encoding */ _buttonInnerLayer;
    void /* unknown type, empty encoding */ _outerLineWidth;
    void /* unknown type, empty encoding */ _animationDuration;
    void /* unknown type, empty encoding */ _centerShapeFillColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_squareBezierPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_circleBezierPath;
}

- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
