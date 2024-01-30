@protocol DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFSnapshot;

@interface DMCEnrollmentFlowRestoreViewController : DMCEnrollmentTemplateTableViewController

@property (weak) id<DMCEnrollmentFlowRestoreViewControllerDelegate> delegate;
@property (retain, nonatomic) id<DMCRFSnapshot> restoreSnapshot;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithDelegate:(id)a0 managedAppleID:(id)a1 restoreSnapshot:(id)a2 conflictingApps:(id)a3;
- (id)_appNamesFromBunldeIDs:(id)a0;

@end
