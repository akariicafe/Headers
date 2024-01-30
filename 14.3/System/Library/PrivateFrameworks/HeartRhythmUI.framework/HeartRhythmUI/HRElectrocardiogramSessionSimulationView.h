@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView

@property (readonly, nonatomic) HRElectrocardiogramSessionScreenView *screenView;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) BOOL isLargeDevice;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpUI;
- (void)setTimeRemaining:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLargeDevice:(BOOL)a1;

@end
