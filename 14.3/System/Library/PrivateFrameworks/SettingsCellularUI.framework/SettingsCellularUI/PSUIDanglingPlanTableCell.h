@class UILabel, UIView;

@interface PSUIDanglingPlanTableCell : PSTableCell

@property (retain, nonatomic) UIView *accessorySpacerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (void)setAccessoryType:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textLabel;
- (BOOL)canBeChecked;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)_setView;
- (void)_setLabel:(id)a0 andPhoneNumber:(id)a1;
- (void)_setCenteredText:(id)a0;

@end
