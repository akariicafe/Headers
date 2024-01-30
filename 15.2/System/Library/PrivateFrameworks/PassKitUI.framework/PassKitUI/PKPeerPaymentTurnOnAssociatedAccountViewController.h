@class PKFamilyMember, PKFamilyMemberCollection;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, PKPassLibraryDataProvider;

@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    long long _context;
    long long _setupType;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
}

@property (weak, nonatomic) id<PKPeerPaymentAssociatedAccountSetupDelegate> delegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFamilyMember:(id)a0 familyCollection:(id)a1 delegate:(id)a2 passLibraryDataProvider:(id)a3 context:(long long)a4 setupType:(long long)a5;

@end
