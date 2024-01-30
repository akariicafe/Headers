@class UILabel, UIButton;

@interface SRAppUsageCell : UITableViewCell

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIButton *button;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;

@end
