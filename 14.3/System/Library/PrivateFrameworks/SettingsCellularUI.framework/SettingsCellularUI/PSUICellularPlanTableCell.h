@class UILabel, PSUIBadgeView;

@interface PSUICellularPlanTableCell : PSTableCell

@property (retain, nonatomic) PSUIBadgeView *badgeView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textLabel;
- (BOOL)canBeChecked;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)_setBadge:(id)a0 andLabel:(id)a1 andPhoneNumber:(id)a2;
- (void)_setCenteredBadge:(id)a0 andLabel:(id)a1;

@end
