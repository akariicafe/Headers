@class HRProfile, NSString, UIProgressHUD, NSDate, NSMutableArray, HKClinicalAccount;
@protocol WDClinicalAccountDetailsViewControllerDelegate;

@interface WDClinicalAccountDetailsViewController : HKTableViewController <HKHealthRecordsStoreAccountStateChangeListener> {
    NSDate *_activityEarliestDismissalDate;
    UIProgressHUD *_hud;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKClinicalAccount *account;
@property (retain, nonatomic) NSString *patientIdentifier;
@property (retain, nonatomic) NSString *lastUpdate;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) BOOL scopeUpgraded;
@property (retain, nonatomic) HRProfile *profile;
@property (weak, nonatomic) id<WDClinicalAccountDetailsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)healthRecordsStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)dealloc;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dismiss:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_showInternalGatewayDetails;
- (void)_presentRemoveAccountConfirmation;
- (void)_deleteAccountPromptingForiCloudConfirmationIfNeeded;
- (void)_presentDeleteAccountFromiCloudConfirmation;
- (void)_deleteAccount;
- (void)_showActivityInProgressUIWithMessage:(id)a0;
- (void)_hideActivityAndDismissUnlessError:(id)a0;
- (void)_popOrDismissViewController;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_computeSections;
- (id)initWithProfile:(id)a0 account:(id)a1;
- (id)accountOwner;
- (void)viewDidLoad;

@end
