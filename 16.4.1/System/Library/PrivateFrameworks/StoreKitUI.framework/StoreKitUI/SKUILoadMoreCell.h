@class UIActivityIndicatorView;

@interface SKUILoadMoreCell : SKUITableViewCell {
    UIActivityIndicatorView *_indicator;
}

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
