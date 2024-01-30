@class UILabel, NSLayoutConstraint, UIActivityIndicatorView;

@interface HRWDSpinnerView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    NSLayoutConstraint *_spinnerTopConstraint;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)startSpinner;
- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)stopSpinner;
- (void)_setupSubviews;
- (void)setMessageWhileSpinning:(id)a0;
- (void)setMessageFont:(id)a0;

@end
