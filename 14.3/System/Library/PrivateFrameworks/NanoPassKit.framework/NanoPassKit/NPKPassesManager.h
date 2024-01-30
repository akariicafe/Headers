@class NSArray, NSString, NSHashTable, PKGroupsController, NPKStandaloneFirstUnlockCoordinator;

@interface NPKPassesManager : NSObject <PKGroupsControllerDelegate, PKGroupDelegate, NPKPassesDataSource>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) PKGroupsController *groupsController;
@property (retain, nonatomic) NSArray *currentPasses;
@property (retain, nonatomic) NSArray *currentPaymentPasses;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator;
@property (nonatomic) BOOL shouldMemoryMapImages;
@property (nonatomic) BOOL shouldWaitForContentAndImageSets;
@property (nonatomic) int notifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)paymentPasses;
- (void)unregisterObserver:(id)a0;
- (void)reloadPasses;
- (void)group:(id)a0 didUpdatePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didInsertPass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didMovePassFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)group:(id)a0 didRemovePass:(id)a1 atIndex:(unsigned long long)a2;
- (id)passes;
- (void)groupsController:(id)a0 didInsertGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didMoveGroup:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)groupsController:(id)a0 didRemoveGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)reloadPassesWithCompletion:(id /* block */)a0;
- (void)enableRemoteUpdates;
- (void)removePass:(id)a0;
- (void)_notifyObservers:(id /* block */)a0;
- (id)initWithShouldMemoryMapImages:(BOOL)a0 shouldWaitForContentAndImageSets:(BOOL)a1;
- (void)_handleObjectSettingsChanged:(id)a0;
- (void)_loadPasses;
- (void)_reloadPasses;
- (void)_updateCurrentPasses;
- (void)_reloadPassesWithCompletion:(id /* block */)a0;
- (id)_reorderedPassesForDisplay:(id)a0;
- (void)_loadContentAndImageSetsForPass:(id)a0 completion:(id /* block */)a1;
- (id)passForUniqueID:(id)a0;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)movePassAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)setDefaultPaymentPass:(id)a0;
- (void)suppressRemoteUpdates;

@end
