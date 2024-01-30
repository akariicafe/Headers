@class NSUUID, NSString, NSArray, OBLinkTrayButton, NSSet, NSDictionary, HKSource, NSMutableSet, OBBoldTrayButton;
@protocol HKHealthPrivacyServicePickerControllerDelegate;

@interface HKVerifiableClinicalRecordPickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePickerController> {
    NSArray *_clinicalRecords;
    NSDictionary *_signedRecordsByIdentifier;
    NSArray *_recordTypes;
    OBBoldTrayButton *_shareButton;
    OBLinkTrayButton *_cancelButton;
    BOOL _hasData;
}

@property (retain, nonatomic) NSMutableSet *enabledSamples;
@property (copy, nonatomic) HKSource *source;
@property (readonly, nonatomic) NSSet *allSamples;
@property (weak, nonatomic) id<HKHealthPrivacyServicePickerControllerDelegate> delegate;
@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)_finishWithError:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)_setUpTableView;
- (void)learnMoreButtonTapped:(id)a0;
- (void)shareButtonTapped:(id)a0;
- (void)_enableSample:(id)a0 enabled:(BOOL)a1;
- (id)_explanationText:(id)a0;
- (id)_headerIconForRecordTypes:(id)a0;
- (id)_headerTitleForRecordTypes:(id)a0;
- (id)_noDataExplanationTextForRecordTypes:(id)a0;
- (id)_noDataTableViewCell;
- (void)_setUpAccessoryButton;
- (void)_setUpCancelBarButtonItem;
- (void)_setUpFooterView;
- (void)_updateCancelButtonState;
- (void)_updateShareButtonState;
- (id)initWithClinicalRecords:(id)a0 signedRecords:(id)a1 recordTypes:(id)a2;
- (void)noDataLearnMoreButtonTapped:(id)a0;
- (void)showDetailsButtonTappedAtIndexPath:(id)a0;

@end
