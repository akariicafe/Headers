@class UITextField, NSLayoutConstraint;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {
    NSLayoutConstraint *_leadingConstraint;
}

@property (readonly, nonatomic) UITextField *editableTextField;

- (void)setSeparatorInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)safeAreaInsetsDidChange;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 autocapitalizationType:(long long)a1 autocorrectionType:(long long)a2;

@end
