@class UIColor, NTKColoringImageView, UIView, CLKDevice;

@interface NTKStopwatchButton : UIControl {
    CLKDevice *_device;
    UIView *_innerView;
    NTKColoringImageView *_glyphView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchEdgeInsets;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIColor *glyphBackgroundColor;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;

@end
