@class PKFamilyMember;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, PKPassLibraryDataProvider;

@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {
    PKFamilyMember *_familyMember;
    PKFamilyMember *_viewer;
    long long _context;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
}

@property (weak, nonatomic) id<PKPeerPaymentAssociatedAccountSetupDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFamilyMember:(id)a0 viewer:(id)a1 delegate:(id)a2 passLibraryDataProvider:(id)a3 context:(long long)a4;
- (void)viewDidLoad;

@end
