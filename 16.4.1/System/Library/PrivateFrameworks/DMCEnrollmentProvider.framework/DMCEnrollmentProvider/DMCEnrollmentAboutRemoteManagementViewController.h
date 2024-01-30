@class UILabel, NSString, NSAttributedString;

@interface DMCEnrollmentAboutRemoteManagementViewController : OBPrivacySplashController

@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSAttributedString *attributedDetailText;

+ (id)_textFontIsBold:(BOOL)a0;
+ (void)presentAboutRemoteManagementViewControllerWithBaseViewController:(id)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)rightBarButtonTapped:(id)a0;

@end
