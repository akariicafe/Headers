@class UIImage;

@interface HUCameraMicrophoneButton : UIControl

@property (retain, nonatomic) UIImage *microphoneImage;
@property (nonatomic, getter=isOn) BOOL on;

- (void)_updateAlpha;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateImage;
- (id)_circleColor;

@end
