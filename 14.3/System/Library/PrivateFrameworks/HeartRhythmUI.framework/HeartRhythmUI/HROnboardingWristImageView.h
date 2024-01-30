@class UIImageView, HRElectrocardiogramSessionSimulationView;

@interface HROnboardingWristImageView : UIView

@property (readonly, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) HRElectrocardiogramSessionSimulationView *screenView;

- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)setTimeRemaining:(double)a0;

@end
