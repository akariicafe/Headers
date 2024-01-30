@class UIActivityIndicatorView;

@interface ICQLocalBackupHeaderView : ICQSubtitleHeaderView {
    UIActivityIndicatorView *_spinner;
}

- (void)layoutSubviews;
- (void)hideSpinner;
- (void).cxx_destruct;
- (id)initWithSpecifier:(id)a0;
- (void)showSpinner;

@end
