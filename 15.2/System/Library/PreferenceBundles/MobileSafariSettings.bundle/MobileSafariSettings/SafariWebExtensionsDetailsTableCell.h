@class UILabel, UIImageView, NSLayoutConstraint;

@interface SafariWebExtensionsDetailsTableCell : PSTableCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    NSLayoutConstraint *_primaryLabelToContentViewLeadingConstraint;
    NSLayoutConstraint *_primaryLabelToImageViewLeadingConstraint;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
