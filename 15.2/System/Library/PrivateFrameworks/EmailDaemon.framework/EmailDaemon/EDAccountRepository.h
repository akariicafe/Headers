@class NSString, EDAccountECAccountTransformer, NSMutableSet, EDPersistenceHookRegistry, NSObject;
@protocol OS_os_log, EDAccountsProvider;

@interface EDAccountRepository : NSObject <EFLoggable, EDAccountChangeHookResponder> {
    NSMutableSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDAccountECAccountTransformer *transformer;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (weak, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)allAccounts;
- (void)accountsAdded:(id)a0;
- (void)accountsRemoved:(id)a0;
- (void)accountsChanged:(id)a0;
- (void)registerObserver:(id)a0 completionHandler:(id /* block */)a1;
- (id)transformAccounts:(id)a0;
- (id)initWithAccountsProvider:(id)a0 hookRegistry:(id)a1;
- (void)allAccountsWithCompletionHandler:(id /* block */)a0;

@end
