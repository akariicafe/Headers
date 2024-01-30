@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) BOOL loading;

- (void)setCellEnabled:(BOOL)a0;
- (id)newControl;
- (id)controlValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (BOOL)canReload;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setValue:(id)a0;

@end
