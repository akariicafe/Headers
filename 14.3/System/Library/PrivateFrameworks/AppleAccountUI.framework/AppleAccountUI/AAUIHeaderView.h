@class UILabel, UIStackView;

@interface AAUIHeaderView : AAUIBuddyView {
    UIStackView *_stackView;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *messageLabel;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_updateStackViewSpacing;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateLabelFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
