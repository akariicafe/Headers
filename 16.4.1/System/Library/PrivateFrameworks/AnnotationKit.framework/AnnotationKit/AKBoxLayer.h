@interface AKBoxLayer : CAShapeLayer {
    double _borderWidthScale;
}

@property double boxCornerRadius;
@property double nominalBorderWidth;
@property (nonatomic) double borderWidthScale;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBoxPath;
- (id)initWithBorderWidth:(double)a0 cornerRadius:(double)a1;

@end
