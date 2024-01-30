@class UILabel;

@interface PSUICellularPlanOptionTableCell : PSTableCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textLabel;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)setCellEnabled:(BOOL)a0;
- (BOOL)canBeChecked;
- (void)_setCenteredText:(id)a0;
- (void)_setLabel:(id)a0 andPhoneNumber:(id)a1;

@end
