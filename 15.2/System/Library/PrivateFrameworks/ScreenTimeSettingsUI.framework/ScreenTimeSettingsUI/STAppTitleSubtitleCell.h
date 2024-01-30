@interface STAppTitleSubtitleCell : PSTableCell

@property (nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL isAppCell;

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)setSpecifier:(id)a0;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
