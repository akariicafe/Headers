@class UIImage;

@interface AccountCell : PSTableCell

@property (retain, nonatomic) UIImage *placeHolderImage;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_profileImageDidChange:(id)a0;
- (void)_updateAccountImage;

@end
