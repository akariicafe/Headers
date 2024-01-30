@class UILabel, NSString, UIActivityIndicatorView;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;

- (void)setActivityIndicatorHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
