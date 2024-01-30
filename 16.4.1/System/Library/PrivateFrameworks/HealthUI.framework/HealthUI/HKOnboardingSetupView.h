@class NSString, UILabel, UIView, UIButton;
@protocol HKOnboardingSetupViewDelegate;

@interface HKOnboardingSetupView : UIView

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *onboardingButton;
@property (weak, nonatomic) id<HKOnboardingSetupViewDelegate> delegate;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSString *buttonTitleString;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_didTapOnboardingButton;
- (id)createHeroView;

@end
