@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView

@property (readonly, nonatomic) HFTemperatureIconDescriptor *iconDescriptor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)shouldFlipForRTL;

@end
