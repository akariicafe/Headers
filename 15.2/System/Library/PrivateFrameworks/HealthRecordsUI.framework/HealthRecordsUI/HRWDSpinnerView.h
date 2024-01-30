@class UILabel, NSLayoutConstraint, UIActivityIndicatorView;

@interface HRWDSpinnerView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    NSLayoutConstraint *_spinnerTopConstraint;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)stopSpinner;
- (id)init;
- (void)_setupSubviews;
- (void)setMessageFont:(id)a0;
- (void)setMessageWhileSpinning:(id)a0;
- (void)startSpinner;

@end
