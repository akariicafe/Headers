@class UIActivityIndicatorView, NSError, UILabel, NSLayoutConstraint;

@interface ASVLoadingView : UIView {
    UILabel *_assetLoadingStatusLabel;
    UIActivityIndicatorView *_spinner;
    NSLayoutConstraint *_spinnerLeadingConstraint;
}

@property (retain, nonatomic) NSError *loadingError;
@property (nonatomic) unsigned long long spinnerColor;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLoadingText;
- (void)_updateLoadingSpinner;

@end
