@class UILayoutGuide, UIImageView, UILabel, NSLayoutConstraint, UIButton;
@protocol MUPlaceAppLockupViewDelegate, MUAppLockupViewModel;

@interface MUPlaceAppLockupView : UIView {
    UIImageView *_appLockupImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_punchoutButton;
    UILayoutGuide *_titleSubtitleLayoutGuide;
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly, nonatomic) double scaledHeight;
@property (weak, nonatomic) id<MUPlaceAppLockupViewDelegate> delegate;
@property (retain, nonatomic) id<MUAppLockupViewModel> viewModel;

+ (struct CGSize { double x0; double x1; })appIconSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_punchOutButtonSelected;

@end
