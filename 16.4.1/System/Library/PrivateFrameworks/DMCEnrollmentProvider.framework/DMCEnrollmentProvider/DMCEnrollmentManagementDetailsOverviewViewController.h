@class NSString, MCProfile;
@protocol DMCEnrollmentManagementDetailsOverviewViewControllerDelegate;

@interface DMCEnrollmentManagementDetailsOverviewViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupNavigationBar;
- (id)initWithDelegate:(id)a0 managedAppleID:(id)a1 profile:(id)a2;
- (void)leftBarButtonTapped:(id)a0;

@end
