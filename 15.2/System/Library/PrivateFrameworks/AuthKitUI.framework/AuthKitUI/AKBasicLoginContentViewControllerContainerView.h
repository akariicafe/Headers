@class NSArray, UIImageView, UIImage, UILabel, NSString;

@interface AKBasicLoginContentViewControllerContainerView : UIView

@property (retain, nonatomic) UIImageView *bannerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) UIImage *bannerImage;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *messageText;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_configureMessageLabel;
- (void)_configureBannerImage;

@end
