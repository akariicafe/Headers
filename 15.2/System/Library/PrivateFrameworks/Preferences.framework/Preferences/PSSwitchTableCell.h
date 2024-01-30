@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) BOOL loading;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setValue:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (BOOL)shouldUseModernLayout;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)newControl;
- (void)prepareForReuse;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (id)controlValue;

@end
