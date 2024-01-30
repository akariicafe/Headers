@class UILabel, UIActivityIndicatorView;

@interface MFActivityIndicatorLabel : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *textLabel;

- (void)startAnimating;
- (id)accessibilityLabel;
- (void)stopAnimating;
- (id)init;
- (void)setActivityIndicator:(id)a0;
- (void).cxx_destruct;

@end
