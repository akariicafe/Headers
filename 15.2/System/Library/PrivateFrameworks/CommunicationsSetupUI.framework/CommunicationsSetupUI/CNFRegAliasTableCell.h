@class UIImageView, UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIImageView *temporaryPhoneGlyph;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL hasSpinner;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;
- (void)_updateIcon;
- (BOOL)usesStandardBackgroundImage;
- (void)setIsTemporaryPhone:(BOOL)a0;

@end
