@class NSString, HFTemperatureIconDescriptor, UIFont;

@interface HUTemperatureIconContentView : HUIconContentView

@property (readonly, nonatomic) HFTemperatureIconDescriptor *iconDescriptor;
@property (retain, nonatomic) UIFont *lastFontFittingSize;
@property (nonatomic) double lastFontFittedWidth;
@property (retain, nonatomic) NSString *lastFontFittedText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldFlipForRTL;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;

@end
