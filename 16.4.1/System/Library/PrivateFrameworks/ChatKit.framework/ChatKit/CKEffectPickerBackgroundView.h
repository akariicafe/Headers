@class CALayer, UIVisualEffectView, CABackdropLayer;

@interface CKEffectPickerBackgroundView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) CALayer *blueContrastLayer;
@property (retain, nonatomic) CABackdropLayer *backdrop;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateBackgroundVisualEffect;

@end
