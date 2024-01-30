@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL showSpinner;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
