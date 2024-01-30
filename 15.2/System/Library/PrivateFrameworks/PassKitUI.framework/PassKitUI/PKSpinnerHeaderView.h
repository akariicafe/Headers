@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL showSpinner;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;

@end
