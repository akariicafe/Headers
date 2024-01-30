@class NSArray, NSString, NSSet, NSMutableDictionary;
@protocol ACMonitoredAccountStoreDelegateProtocol, NSObject;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {
    NSSet *_accountTypesToMonitor;
    NSMutableDictionary *_accountsByID;
    id<ACMonitoredAccountStoreDelegateProtocol> _delegate;
    id<NSObject> _credentialsDidChangeObserver;
}

@property (readonly) NSArray *monitoredAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1 accountTypes:(id)a2 delegate:(id)a3;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(id /* block */)a0;
- (void)_registerForCredentialChangedNotifications;
- (void)_registerAccountMonitorWithCompletion:(id /* block */)a0;
- (void)_reregister;
- (void).cxx_destruct;
- (void)_processAccountsListForNotifications:(id)a0;
- (void)dealloc;
- (id)initWithAccountTypes:(id)a0 delegate:(id)a1;
- (id)monitoredAccountWithIdentifier:(id)a0;
- (void)credentialsChangedNotification:(id)a0;
- (void)registerSynchronouslyWithError:(id *)a0;
- (void)_accountsListPopulated:(id)a0;
- (void)registerWithCompletion:(id /* block */)a0;
- (void)connectionClosed;
- (void)accountWasRemoved:(id)a0;
- (void)accountWasModified:(id)a0;
- (id)connectionDelegate;
- (void)accountWasAdded:(id)a0;

@end
