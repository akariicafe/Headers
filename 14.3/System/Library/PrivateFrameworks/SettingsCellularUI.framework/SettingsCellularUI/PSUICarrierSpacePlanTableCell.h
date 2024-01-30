@interface PSUICarrierSpacePlanTableCell : PSTableCell

+ (id)checkIcon;
+ (id)spacerIcon;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canBeChecked;
- (id)accessoryText;
- (id)detailText;
- (void)setChecked:(BOOL)a0;
- (id)primaryText;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
