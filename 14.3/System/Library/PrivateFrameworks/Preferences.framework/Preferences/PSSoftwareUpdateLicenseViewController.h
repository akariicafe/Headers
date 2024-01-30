@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void).cxx_destruct;
- (id)initWithLicense:(id)a0;
- (void)setLicenseText:(id)a0;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
