@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell {
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void)stopAnimating;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithReuseIdentifier:(id)a0;
- (void)dealloc;

@end
