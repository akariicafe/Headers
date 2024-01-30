@class UIImageView, UILabel, UIStackView;

@interface AAUIHeaderView : AAUIBuddyView {
    UIStackView *_stackView;
}

@property (readonly, nonatomic) UIImageView *headerImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateLabelFonts;
- (void)setHeaderImage:(id)a0;
- (void)_updateStackViewSpacing;

@end
