@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
    UIView *_disabledView;
}

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)newControl;
- (id)titleLabel;
- (void)prepareForReuse;
- (id)controlValue;

@end
