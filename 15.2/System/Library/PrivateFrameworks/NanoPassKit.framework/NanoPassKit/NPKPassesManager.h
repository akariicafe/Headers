@class NSArray, NSString, NSHashTable, PKGroupsController, NPKStandaloneFirstUnlockCoordinator, NSObject;
@protocol OS_dispatch_queue;

@interface NPKPassesManager : NSObject <PKGroupsControllerDelegate, PKGroupDelegate, NPKPassesDataSource> {
    NSObject<OS_dispatch_queue> *_loadImageQueue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) PKGroupsController *groupsController;
@property (retain, nonatomic) NSArray *currentPasses;
@property (retain, nonatomic) NSArray *currentPaymentPasses;
@property (retain, nonatomic) NSArray *currentSecureElementPasses;
@property (retain, nonatomic) NSArray *currentExpiredPasses;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator;
@property (nonatomic) unsigned long long options;
@property (nonatomic) int notifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removePass:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)group:(id)a0 didUpdatePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didInsertPass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didMovePassFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)group:(id)a0 didRemovePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didInsertGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)groupsController:(id)a0 didMoveGroup:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)groupsController:(id)a0 didRemoveGroup:(id)a1 atIndex:(unsigned long long)a2;
- (void)enableRemoteUpdates;
- (void)dealloc;
- (void)_notifyObservers:(id /* block */)a0;
- (id)passes;
- (id)paymentPasses;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)a0;
- (void)_handleObjectSettingsChanged:(id)a0;
- (void)_loadPasses;
- (void)_reloadPasses;
- (void)_updateCurrentPasses;
- (void)_reloadPassesWithCompletion:(id /* block */)a0;
- (void)_didFinishLoadPasses;
- (void)_loadImageSetFromPasses:(id /* block */)a0;
- (void)_setGroupControllerGroupsDelegate;
- (void)_loadContentAndImageSetsForPass:(id)a0 completion:(id /* block */)a1;
- (id)passForUniqueID:(id)a0;
- (id)secureElementPasses;
- (id)expiredPasses;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)movePassAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)unarchivePass:(id)a0;
- (void)setDefaultPaymentPass:(id)a0;
- (void)suppressRemoteUpdates;

@end
