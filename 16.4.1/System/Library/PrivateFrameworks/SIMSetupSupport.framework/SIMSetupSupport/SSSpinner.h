@class UILabel, UIActivityIndicatorView;

@interface SSSpinner : UIStackView

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) UILabel *label;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)updateText:(id)a0;

@end
