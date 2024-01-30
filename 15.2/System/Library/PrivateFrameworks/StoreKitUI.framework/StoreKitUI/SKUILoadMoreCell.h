@class UIActivityIndicatorView;

@interface SKUILoadMoreCell : SKUITableViewCell {
    UIActivityIndicatorView *_indicator;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stopAnimating;
- (void).cxx_destruct;
- (void)startAnimating;

@end
