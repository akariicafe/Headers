@interface PageTitleAndAddressTableViewCell : CompletionListTableViewCell

+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateNumberOfLines;

@end
