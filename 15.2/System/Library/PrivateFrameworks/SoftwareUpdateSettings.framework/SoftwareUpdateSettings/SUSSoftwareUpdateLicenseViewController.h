@class NSString, UITextView;

@interface SUSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)viewDidLoad;
- (id)initWithLicense:(id)a0;
- (void)setLicenseText:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
