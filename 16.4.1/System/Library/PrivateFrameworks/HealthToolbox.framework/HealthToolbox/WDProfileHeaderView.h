@class UILabel, NSPersonNameComponentsFormatter, UIView;

@interface WDProfileHeaderView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSPersonNameComponentsFormatter *nameFormatter;
@property (retain, nonatomic) UIView *avatarView;
@property (nonatomic, getter=isNameHidden) BOOL nameHidden;

+ (BOOL)requiresConstraintBasedLayout;
+ (double)avatarViewSize;

- (void)_updateFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setFirstName:(id)a0 lastName:(id)a1;

@end
