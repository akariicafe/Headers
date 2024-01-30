@class CAShapeLayer, LAUICheckmarkLayer;

@interface CIDVRGBCheckmarkView : UIView {
    LAUICheckmarkLayer *_checkmarkLayer;
    CAShapeLayer *_circle;
    double _scale;
}

- (void)layoutSubviews;
- (void)dismiss;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)showSuccess;
- (void)_setupCheckmarkLayer;
- (void)_setupCircle;
- (void)_sizeAndPositionCheckmark;
- (void)_animateCircleForSuccess;
- (void)showSuccessWithCompletion:(id /* block */)a0;

@end
