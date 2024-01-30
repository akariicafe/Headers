@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
    UIView *_disabledView;
}

- (void)setCellEnabled:(BOOL)a0;
- (id)newControl;
- (id)controlValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setValue:(id)a0;

@end
