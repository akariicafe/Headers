@class UIImageView, CLKDevice;

@interface NTKRoundedCornerOverlayView : UIView {
    double _cornerRadius;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    CLKDevice *_device;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDeviceCornerRadius:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 cornerRadius:(double)a2;

@end
