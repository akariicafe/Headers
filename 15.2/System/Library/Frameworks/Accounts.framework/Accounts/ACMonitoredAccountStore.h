@class NSArray, NSString, NSSet, NSMutableDictionary, NSHashTable;
@protocol NSObject;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {
    NSSet *_accountTypesToMonitor;
    NSMutableDictionary *_accountsByID;
    NSHashTable *_delegates;
    id<NSObject> _credentialsDidChangeObserver;
    id<NSObject> _remoteAccountDidChangeObserver;
}

@property (readonly) NSArray *monitoredAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_reregister;
- (void)_registerForCredentialChangedNotifications;
- (void)registerWithCompletion:(id /* block */)a0;
- (void)connectionClosed;
- (void)accountWasModified:(id)a0;
- (id)connectionDelegate;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)accountWasAdded:(id)a0;
- (void)_registerAccountMonitorWithCompletion:(id /* block */)a0;
- (id)monitoredAccountWithIdentifier:(id)a0;
- (void)registerSynchronouslyWithError:(id *)a0;
- (void)dealloc;
- (void)_processAccountsListForNotifications:(id)a0;
- (void)_accountsListPopulated:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (id)initWithAccountTypes:(id)a0 delegate:(id)a1;
- (id)initWithWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1 accountTypes:(id)a2 delegate:(id)a3;
- (void)credentialsChangedNotification:(id)a0;

@end
