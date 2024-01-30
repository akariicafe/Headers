@class NSString, UITextView;

@interface SUSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)setLicenseText:(id)a0;
- (id)initWithLicense:(id)a0;

@end
