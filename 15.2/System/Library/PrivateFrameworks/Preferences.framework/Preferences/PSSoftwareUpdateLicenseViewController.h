@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithLicense:(id)a0;
- (void)setLicenseText:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
