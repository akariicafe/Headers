@class NSLayoutConstraint;

@interface FASharedServicesSpecifierCell : PSTableCell {
    NSLayoutConstraint *_widthConstraint;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)blankIcon;
- (id)getLazyIcon;

@end
