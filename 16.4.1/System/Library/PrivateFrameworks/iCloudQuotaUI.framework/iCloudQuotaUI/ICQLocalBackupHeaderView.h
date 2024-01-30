@class UIActivityIndicatorView;

@interface ICQLocalBackupHeaderView : ICQSubtitleHeaderView {
    UIActivityIndicatorView *_spinner;
}

- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)hideSpinner;
- (void)showSpinner;

@end
