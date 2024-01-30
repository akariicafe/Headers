@class UILabel;

@interface PSUIConvertedCellularPlanTableCell : PSTableCell

@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *statusLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textLabel;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setLabel:(id)a0 andDescription:(id)a1;

@end
