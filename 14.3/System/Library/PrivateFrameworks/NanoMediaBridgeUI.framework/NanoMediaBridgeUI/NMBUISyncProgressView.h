@class UIProgressView, UIStackView, UIActivityIndicatorView, UIVisualEffectView, UILabel;

@interface NMBUISyncProgressView : UIView {
    UIStackView *_progressContainerView;
    UIProgressView *_progressView;
    UILabel *_progressTextLabel;
    UIActivityIndicatorView *_progressIndicator;
    UIVisualEffectView *_backgroundView;
    BOOL _shouldShowProgressDetails;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithShouldShowProgressBar:(BOOL)a0 progress:(float)a1 progressText:(id)a2;

@end
