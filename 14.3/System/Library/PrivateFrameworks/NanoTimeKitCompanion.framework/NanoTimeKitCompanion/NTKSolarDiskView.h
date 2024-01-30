@class UIView, CLKDevice;

@interface NTKSolarDiskView : UIView

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIView *sunUpView;
@property (retain, nonatomic) UIView *sunDownView;
@property (nonatomic) double horizonLine;

- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;

@end
