@class UIImageView, UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIImageView *temporaryPhoneGlyph;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL hasSpinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setChecked:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateIcon;
- (BOOL)usesStandardBackgroundImage;
- (void)setIsTemporaryPhone:(BOOL)a0;

@end
