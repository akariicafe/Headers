@class UIButton, UIVisualEffectView, UILabel, UITableView;

@interface HKSplashScreenView : UIView

@property (retain, nonatomic) UIVisualEffectView *topBlurView;
@property (retain, nonatomic) UIVisualEffectView *bottomBlurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *featureTableView;
@property (retain, nonatomic) UIButton *continueButton;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateForFontOrTextChange;
- (void)updateTableViewInsetsForHeaderAndFooterBlurView;

@end
