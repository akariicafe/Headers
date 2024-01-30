@class HRProfile, NSDate, HKMedicalRecord, UIProgressHUD, HKAccountOwner, HKClinicalAccount, WDMedicalRecordDetailDataProvider;

@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate>

@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (readonly, copy, nonatomic) HKAccountOwner *accountOwner;
@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (retain, nonatomic) WDMedicalRecordDetailDataProvider *medicalRecordDataProvider;
@property (copy, nonatomic) NSDate *hudEarliestDismissalDate;
@property (weak, nonatomic) UIProgressHUD *hud;
@property (nonatomic) BOOL needsReloadOnEnteringForeground;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_dismissViewController;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didEnterForeground:(id)a0;
- (void)_tapToRadar:(id)a0;
- (void)recomputeDisplayItems:(id)a0;
- (void)trackUserImpression;
- (id)initWithProfile:(id)a0 medicalRecord:(id)a1;
- (void)trackUserInteraction;
- (void)_openAppURL:(id)a0;
- (void)_promptForSignedClinicalDataDeletion:(id)a0;
- (id)_pasteboardStringForRowAtIndexPath:(id)a0;
- (id)_makeCopyMenuFor:(id)a0;
- (void)_deleteSignedClinicalData;
- (void)_showActivityInProgressUIWithMessage:(id)a0;
- (void)_hideActivityWithError:(id)a0 completion:(id /* block */)a1;
- (id)recordCategory;
- (void)detailDataProviderHasDisplayItemUpdate:(id)a0;

@end
