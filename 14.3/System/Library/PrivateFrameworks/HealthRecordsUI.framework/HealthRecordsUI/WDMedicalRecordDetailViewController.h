@class HRProfile, HKMedicalRecord, HKAccountOwner, HKClinicalAccount, WDMedicalRecordDetailDataProvider;

@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate>

@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (readonly, copy, nonatomic) HKAccountOwner *accountOwner;
@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKMedicalRecord *medicalRecord;
@property (retain, nonatomic) WDMedicalRecordDetailDataProvider *medicalRecordDataProvider;

- (void)trackUserImpression;
- (id)initWithProfile:(id)a0 medicalRecord:(id)a1;
- (void)trackUserInteraction;
- (id)_pasteboardStringForRowAtIndexPath:(id)a0;
- (id)recordCategory;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)_tapToRadar:(id)a0;
- (void).cxx_destruct;
- (id)_makeCopyMenuFor:(id)a0;
- (void)detailDataProviderHasDisplayItemUpdate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
