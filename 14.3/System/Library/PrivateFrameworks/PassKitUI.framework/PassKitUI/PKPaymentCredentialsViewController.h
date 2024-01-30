@class PKPaymentCredentialCache, NSString, PKPaymentProvisioningController, UIImage, PKPaymentSetupFlowController, NSMutableDictionary, PKTableHeaderView, PKPaymentSetupProduct, NSMutableArray, NSMutableOrderedSet, PKPaymentSetupFooterView, PKPaymentCredentialTableViewCell;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentProvisioningController *_provisioningController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSMutableArray *_credentialCaches;
    PKPaymentCredentialCache *_peerPaymentCredentialCache;
    NSMutableArray *_refundedCredentialCaches;
    NSMutableArray *_unavailableCredentialCaches;
    NSMutableOrderedSet *_ordering;
    NSMutableDictionary *_paymentCredentialToCredentialSectionMap;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    BOOL _allowsManualEntry;
    UIImage *_placeHolder;
    PKPaymentCredentialTableViewCell *_sizingCell;
    unsigned long long _maximumNumberOfSelectableCredentials;
    double _cachedHeaderViewWidth;
    PKPaymentSetupFlowController *_flowController;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (copy, nonatomic) NSString *lastBackedUpDefaultPaymentPassSerialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 credentials:(id)a3 allowsManualEntry:(BOOL)a4;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)_populateOrderCredentialCaches;
- (void)_sortCredentialCaches:(id)a0;
- (void)_presentManualAddController;
- (void)_setupLaterTapped;
- (void)_updateRemoteCredentialCache;
- (void)_updateMaximumSelectableCredentials;
- (void)_updateTableHeaderViewSubtitle;
- (BOOL)_canSelectCredentialCache:(id)a0;
- (void)_updateForSelectionCount;
- (unsigned long long)_credentialSectionForSection:(long long)a0;
- (void)_configureCell:(id)a0 inTableView:(id)a1 atIndexPath:(id)a2 sizing:(BOOL)a3;
- (void)_setPassSnapshotOnCell:(id)a0 cell:(id)a1;
- (long long)_sectionForCredentialSection:(unsigned long long)a0;
- (void)_showRefund:(id)a0;
- (void)_showUnavailableDetail:(id)a0;
- (void)_startProvisioningForCredentials:(id)a0;
- (unsigned long long)_numberOfSelectedCredentials;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)performSecurityCheckForCredentials:(id)a0 completion:(id /* block */)a1;
- (void)_startProvisioningForSelectedCards;
- (void)_presentAccountAlertIfNotSelectedWithContinueHandler:(id /* block */)a0 setupLaterHandler:(id /* block */)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 completion:(id /* block */)a1;
- (void)_continue;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_terminateSetupFlow;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (id)paymentSetupMarker;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_credentialCacheRequiringAlert;
- (void)_presentAlertForCredentialCache:(id)a0 continueHandler:(id /* block */)a1 setupLaterHandler:(id /* block */)a2;
- (unsigned long long)_credentialSectionForPaymentCredential:(id)a0;
- (void)_queue_updatePassSnapshot:(id)a0 paymentCredential:(id)a1 credentialSection:(unsigned long long)a2 credentialsInCache:(id)a3;
- (void)_presentSecurityCapabilitiesFlowWithFeature:(unsigned long long)a0 completion:(id /* block */)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
