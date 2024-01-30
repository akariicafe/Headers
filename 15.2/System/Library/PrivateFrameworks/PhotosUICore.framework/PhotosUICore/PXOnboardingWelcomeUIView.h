@class UIFont, UIView, NSArray, NSString, UIButton, UILayoutGuide, NSLayoutConstraint, UILabel;

@interface PXOnboardingWelcomeUIView : UIView {
    struct { BOOL button; } _needsUpdateFlags;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *iconTopCnst;
@property (retain, nonatomic) NSLayoutConstraint *startBottomCnst;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) UILayoutGuide *leadingWhitespace;
@property (readonly, nonatomic) UILayoutGuide *middleWhitespace;
@property (readonly, nonatomic) UILayoutGuide *trailingWhitespace;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) UIButton *startButton;
@property (retain, nonatomic) UIView *iconView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonTitle;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_invalidateConstraints;
- (void)tintColorDidChange;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (id)_createPortraitConstraintsPhone;
- (id)_createLandscapeConstraintsPhone;
- (id)_createPadConstraints;

@end
