@class UILayoutGuide, UILabel, UIActivityIndicatorView;

@interface TPSLoadingView : UIView {
    UILayoutGuide *_loadingLayoutGuide;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLoadingLabel:(BOOL)a0;

@end
