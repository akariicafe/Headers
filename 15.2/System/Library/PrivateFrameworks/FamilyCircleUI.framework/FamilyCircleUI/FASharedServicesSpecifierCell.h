@class NSLayoutConstraint;

@interface FASharedServicesSpecifierCell : PSTableCell {
    NSLayoutConstraint *_widthConstraint;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)blankIcon;
- (void).cxx_destruct;
- (id)getLazyIcon;

@end
