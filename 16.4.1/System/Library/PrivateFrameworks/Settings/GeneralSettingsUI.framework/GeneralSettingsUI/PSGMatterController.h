@class NSArray, MTSSystemCommissionerPairingManager;

@interface PSGMatterController : PSEditableListController

@property (retain, nonatomic) MTSSystemCommissionerPairingManager *pairingManager;
@property (retain, nonatomic) NSArray *accessorySpecifiers;

+ (id)accessorySpecifierWithID:(id)a0 name:(id)a1 pairing:(id)a2 target:(id)a3;
+ (void)shouldShowMatterControllerWithCompletion:(id /* block */)a0;
+ (BOOL)shouldShowTestSpecifiers;
+ (id)testSpecifiers;

- (void)didBecomeActive:(id)a0;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)aboutLinkWasTapped;
- (void)deleteAccessory:(id)a0;
- (id)detailText:(id)a0;
- (void)reloadAccessoriesWithCompletion:(id /* block */)a0;
- (void)showDeleteAllConfirmation:(id)a0;

@end
