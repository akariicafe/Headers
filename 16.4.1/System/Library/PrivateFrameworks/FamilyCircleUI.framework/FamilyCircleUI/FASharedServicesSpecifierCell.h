@class NSLayoutConstraint;

@interface FASharedServicesSpecifierCell : PSTableCell {
    NSLayoutConstraint *_widthConstraint;
}

+ (long long)cellStyle;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)blankIcon;
- (id)getLazyIcon;
- (void).cxx_destruct;

@end
