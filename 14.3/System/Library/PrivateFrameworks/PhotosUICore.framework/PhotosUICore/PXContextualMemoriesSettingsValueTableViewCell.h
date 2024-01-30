@class UILabel, NSLayoutConstraint, UIView, UIButton;

@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *topLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftLayoutMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightLayoutMarginConstraint;
@property (readonly, nonatomic) UILabel *valueLabel;
@property (copy, nonatomic) id /* block */ resetHandler;

- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_didPressReset:(id)a0;

@end
