@class UIImageView, UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIImageView *temporaryPhoneGlyph;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL hasSpinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)setChecked:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateIcon;
- (void).cxx_destruct;
- (void)setIsTemporaryPhone:(BOOL)a0;
- (BOOL)usesStandardBackgroundImage;

@end
