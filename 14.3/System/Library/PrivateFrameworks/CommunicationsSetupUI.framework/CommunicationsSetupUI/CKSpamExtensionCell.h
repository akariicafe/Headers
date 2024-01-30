@interface CKSpamExtensionCell : PSTableCell

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setChecked:(BOOL)a0;
- (void)layoutSubviews;
- (BOOL)usesStandardBackgroundImage;

@end
