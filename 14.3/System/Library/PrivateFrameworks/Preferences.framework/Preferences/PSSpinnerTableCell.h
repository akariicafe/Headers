@class UIActivityIndicatorView;

@interface PSSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
