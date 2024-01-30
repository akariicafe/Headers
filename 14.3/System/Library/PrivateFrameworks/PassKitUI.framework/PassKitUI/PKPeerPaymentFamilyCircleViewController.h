@class PKFamilyMember, NSString, PKPeerPaymentService, PKPaymentService, PKPeerPaymentAccount, NSArray;
@protocol PKPassLibraryDataProvider;

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate> {
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    BOOL _loadingFamily;
    NSArray *_sortedRows;
    PKFamilyMember *_viewer;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFamilyMembers:(id)a0 altDSIDToImageData:(id)a1;
- (id)initWithPKFamilyMembers:(id)a0 altDSIDToImageData:(id)a1 passLibraryDataProvider:(id)a2;
- (void)_processFamilyMembers:(id)a0;
- (void)_processAltDSIDToImageData:(id)a0;
- (void)_loadFamilyIfNecessary;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)_handleRowTapped:(id)a0;
- (id)_pendingInvitations;
- (void)_reloadSortedRows;
- (id)_dsidsMissingImages;
- (void)_loadFamilyMembers;
- (void)_loadFamilyMemberImagesForDSIDs:(id)a0;
- (id)_familyMemberWithDSID:(id)a0;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)a0 updatedAccount:(id)a1 forFamilyMember:(id)a2;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)a0;
- (id)initWithFamilyMembers:(id)a0;
- (void)viewDidLoad;

@end
