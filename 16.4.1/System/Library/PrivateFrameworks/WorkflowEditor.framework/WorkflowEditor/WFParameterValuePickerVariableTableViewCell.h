@class UILabel, WFIconHostingView;

@interface WFParameterValuePickerVariableTableViewCell : UITableViewCell

@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) WFIconHostingView *iconView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateWithName:(id)a0 icon:(id)a1;

@end
