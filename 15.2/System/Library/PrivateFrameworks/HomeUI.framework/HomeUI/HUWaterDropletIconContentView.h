@class UIImageView, HFPrimaryStateIconDescriptor;

@interface HUWaterDropletIconContentView : HUIconContentView

@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (long long)renderingModeForSubview:(id)a0 suggestedRenderingMode:(long long)a1;

@end
