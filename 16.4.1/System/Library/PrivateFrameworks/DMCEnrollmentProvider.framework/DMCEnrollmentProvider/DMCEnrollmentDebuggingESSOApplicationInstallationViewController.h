@class NSArray, DMCEnrollmentConfirmationView, LSApplicationWorkspace, NSString;
@protocol DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate;

@interface DMCEnrollmentDebuggingESSOApplicationInstallationViewController : DMCEnrollmentTemplateTableViewController <LSApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;
@property (weak) id<DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *requiredEntitlements;
@property (nonatomic) BOOL requiredAppInstalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupNavigationBar;
- (id)initWithDelegate:(id)a0 appBundleIDs:(id)a1 requiredEntitlements:(id)a2;
- (void)leftBarButtonTapped:(id)a0;
- (void)updateContinueButtonStatus;

@end
