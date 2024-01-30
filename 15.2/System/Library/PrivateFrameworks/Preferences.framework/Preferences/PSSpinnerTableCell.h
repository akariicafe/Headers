@class UIActivityIndicatorView;

@interface PSSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
}

@property (readonly, nonatomic) UIActivityIndicatorView *spinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
