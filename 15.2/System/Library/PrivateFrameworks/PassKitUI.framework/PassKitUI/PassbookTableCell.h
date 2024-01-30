@interface PassbookTableCell : PSTableCell

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)_updateActivityIndicatorForSpecifier:(id)a0;

@end
