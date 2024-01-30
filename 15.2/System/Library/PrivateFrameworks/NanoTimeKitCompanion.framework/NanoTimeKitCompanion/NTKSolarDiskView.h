@class UIView, CLKDevice;

@interface NTKSolarDiskView : UIView

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIView *sunUpView;
@property (retain, nonatomic) UIView *sunDownView;
@property (nonatomic) double horizonLine;

- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithSize:(double)a0 forDevice:(id)a1;

@end
