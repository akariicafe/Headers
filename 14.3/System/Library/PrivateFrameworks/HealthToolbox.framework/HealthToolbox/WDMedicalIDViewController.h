@class UIScrollView, NSString, UIStackView, HKNavigationController, HKMedicalIDViewController, WDProfile, UIAlertController, SOSContactsManager, _HKMedicalIDData;

@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder> {
    _HKMedicalIDData *_medicalIDData;
    BOOL _medicalIDIsNew;
    UIScrollView *_introView;
    UIStackView *_introStackView;
    BOOL _loadingMedicalID;
    int _medicalIDChangedToken;
    HKNavigationController *_medicalIDEditor;
    BOOL _shouldShowConsolidationAlert;
}

@property (weak, nonatomic) HKMedicalIDViewController *currentMedicalIDViewController;
@property (weak, nonatomic) UIAlertController *consolidationAlertController;
@property (retain, nonatomic) SOSContactsManager *sosContactsManager;
@property (retain, nonatomic) WDProfile *profile;
@property (nonatomic) BOOL shouldReloadMedicalIDData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (id)initWithProfile:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)uniqueUserActivityType;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidDelete:(id)a0;
- (void)medicalIDViewControllerDidAppear:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_dismissMedicalIDEditor;
- (void)_updateActivityForViewDidAppear;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_loadMedicalIDDataIfNecessaryWithCompletion:(id /* block */)a0;
- (void)updateNavigationbar;
- (void)_showContactsConsolidationAlert;
- (void)_assertViewStateWhenViewDidAppear;
- (void)_organDonationSignupButtonTapped:(id)a0;
- (void)_handleFetchedMedicalIDData:(id)a0;
- (void)_showMedicalIDView;
- (id)_createMedicalIDDataFromMeCardAndHealthKit;
- (void)_showMedicalIDEditor;
- (void)_createMedicalIDTapped:(id)a0;
- (id)medicalIDViewControllerInEditMode:(BOOL)a0;
- (void)_pushAndSetCurrentMedicalIDViewController:(id)a0;
- (void)_checkForEmergencyContactConsolidationNeeds;
- (void)_dismissMedicalIDView;

@end
