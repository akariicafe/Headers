@class UILabel, NSString, UIActivityIndicatorView;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *title;

- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setActivityIndicatorHidden:(BOOL)a0;
- (void)updateFontOfTitleLabel:(id)a0;

@end
