@class UILabel;

@interface PSUITurnOnThisLineTableCell : PSTableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textLabel;
- (void).cxx_destruct;
- (void)_updateStatus:(id)a0;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setTitle:(id)a0 andStatus:(id)a1;

@end
