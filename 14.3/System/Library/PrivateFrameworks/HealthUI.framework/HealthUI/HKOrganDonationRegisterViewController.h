@class HKOrganDonationRegistrant, NSString, NSArray, HKOrganDonationConnectionManager, HKHealthStore, UIActivityIndicatorView, UIButton, UIView, UIFont, UIBarButtonItem, _HKMedicalIDData;

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate> {
    HKOrganDonationConnectionManager *_connectionManager;
    HKHealthStore *_healthStore;
    UIButton *_continueButton;
    UIActivityIndicatorView *_loadingIndicator;
    UIBarButtonItem *_loadingIndicatorBarButtonItem;
    UIBarButtonItem *_updateBarButtonItem;
    UIView *_headerView;
    UIView *_footerView;
    BOOL _isLoading;
    BOOL _isUpdate;
    UIFont *_bodyFont;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) HKOrganDonationRegistrant *registrant;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) id /* block */ registrationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)focusItemAtIndex:(long long)a0;
- (void)dataEntryItemDonePressed:(id)a0;
- (void)dataEntryItemPrevPressed:(id)a0;
- (void)dataEntryItemNextPressed:(id)a0;
- (void)nextButtonTapped:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)updateButtonTapped:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)organDonationConnectionManagerDidStoreCredential:(id)a0;
- (void)organDonationConnectionManagerDidRemoveCredential:(id)a0;
- (void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
- (void)_handleAppWillEnterForegroundNotification:(id)a0;
- (void)_setupRegisterViewWithRegistrant:(id)a0 demographicsInformation:(id)a1;
- (void)_toggleLoadingStatusIsLoading:(BOOL)a0;
- (void)_toggleNextButtonEnabledState;
- (void)_reloadRegistrantInformationFromServer;
- (void)_setupRegisterViewWithDefaultDemographicsInformation;
- (void)_setupRegisterViewWithRegistrant:(id)a0;
- (BOOL)_registrantIsUnderAge;
- (void)_handleResponse:(id)a0 status:(long long)a1;
- (void)organDonationRegistrantDidUpdateValue:(id)a0;
- (void)_headerTapped:(id)a0;

@end
