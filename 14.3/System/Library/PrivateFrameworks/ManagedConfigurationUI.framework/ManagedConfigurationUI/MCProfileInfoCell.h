@interface MCProfileInfoCell : PSTableCell

+ (float)estimatedRowHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (id)_scriptingInfo;
- (void)setDisplayName:(id)a0 organization:(id)a1;
- (void)setIsNearExpiration:(BOOL)a0;

@end
