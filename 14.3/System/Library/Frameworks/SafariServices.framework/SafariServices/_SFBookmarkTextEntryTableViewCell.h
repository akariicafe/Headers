@class UITextField, NSLayoutConstraint;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {
    NSLayoutConstraint *_leadingConstraint;
}

@property (readonly, nonatomic) UITextField *editableTextField;

- (void)layoutMarginsDidChange;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithText:(id)a0 autocapitalizationType:(long long)a1 autocorrectionType:(long long)a2;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
