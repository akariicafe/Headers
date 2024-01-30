@class NSString, NSArray, HKDisplayCategoryController, HKHealthStore, HKSourceAuthorizationController, NSSet, HKSource, UIBarButtonItem;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceAuthorizationControllerDelegate, HKHealthPrivacyServicePickerControllerDelegate, HKHealthPrivacyServicePromptController> {
    NSArray *_documents;
    NSArray *_readingTypeOrdering;
    BOOL _requiresBackgroundAppRefreshDisclosure;
    BOOL _hasFetchedBackgroundAppRefreshStatus;
    BOOL _isBackgroundAppRefreshEnabled;
}

@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (retain, nonatomic) HKSourceAuthorizationController *sourceAuthorizationController;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (readonly) BOOL isPrompting;
@property (retain) NSArray *actualSections;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSource *source;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *updateDescription;
@property (copy, nonatomic) NSString *shareDescription;
@property (copy, nonatomic) NSString *researchStudyUsageDescription;
@property (retain, nonatomic) NSSet *typesToShare;
@property (retain, nonatomic) NSSet *typesToRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)_finishWithError:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_done:(id)a0;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (BOOL)shouldPresent;
- (void)_addHeaderView;
- (void)authorizationController:(id)a0 parentTypeIsDisabled:(id)a1 forType:(id)a2 inSection:(long long)a3;
- (long long)authorizationSectionForSection:(long long)a0;
- (void)_addCancelAndDoneButtons;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)a0;
- (void)_configurationFailedWithError:(id)a0;
- (void)_didFetchBackgroundAppRefreshStatus:(BOOL)a0;
- (void)_fetchBackgroundAppRefreshStatusWithHandler:(id /* block */)a0;
- (BOOL)_isTypeEnabledAtIndexPath:(id)a0;
- (id)_localizedNameForSection:(long long)a0 type:(id)a1;
- (id)_localizedSourceExplanationWithDescription:(id)a0 forReadingSection:(BOOL)a1;
- (id)_openAppCell;
- (id)_researchStudyExplanationCell;
- (BOOL)_shouldDisplayHealthRecordsRequests;
- (BOOL)_shouldDisplayReadingSection;
- (BOOL)_shouldDisplaySharingSection;
- (id)_specialCellWithIdentifier:(id)a0;
- (id)_toggleAllCell;
- (id)_typeForIndexPath:(id)a0 section:(long long *)a1;
- (void)authorizationController:(id)a0 subTypesEnabled:(id)a1 forType:(id)a2 inSection:(long long)a3;
- (id)initWithHealthStore:(id)a0 style:(long long)a1;
- (void)pickerControllerDidFinish:(id)a0 error:(id)a1;
- (void)reloadAuthorizationSettings;
- (id)sectionsForAuthController:(id)a0;
- (void)updateAllowButtonEnabledState;

@end
