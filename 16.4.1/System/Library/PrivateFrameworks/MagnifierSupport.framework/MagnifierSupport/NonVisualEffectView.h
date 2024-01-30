@class UIVisualEffect, NSString, _UIVisualEffectBackdropView, UIView;

@interface NonVisualEffectView : UIView {
    UIView *_contentView;
    double _cornerRadius;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView;
@property (readonly, nonatomic) UIView *backgroundView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCornerRadius:(double)a0;
- (id)initWithEffect:(id)a0;
- (double)_cornerRadius;
- (void).cxx_destruct;

@end
