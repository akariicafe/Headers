@interface SafariSettingsEditableTableCell : PSEditableTableCell

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)copy:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;
- (void)_textFieldChanged:(id)a0;
- (void)safari_sharePassword:(id)a0;

@end
