@class UILabel, UIActivityIndicatorView;

@interface MFActivityIndicatorLabel : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *textLabel;

- (void)stopAnimating;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)init;
- (void)setActivityIndicator:(id)a0;

@end
