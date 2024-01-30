@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL showSpinner;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
