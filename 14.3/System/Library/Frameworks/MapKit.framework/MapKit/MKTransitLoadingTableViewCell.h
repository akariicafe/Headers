@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithReuseIdentifier:(id)a0;

@end
