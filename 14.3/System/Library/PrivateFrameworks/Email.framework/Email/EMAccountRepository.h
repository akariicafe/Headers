@class NSArray, NSString, NSXPCInterface, NSMutableDictionary, NSObject, EMRemoteConnection;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_accounts;
    EMRemoteConnection *_connection;
    id<EFScheduler> _recoveryHandlerScheduler;
    id<EFScheduler> _observerScheduler;
    id<EFCancelable> _cancelable;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSArray *allAccounts;
@property (readonly, nonatomic) NSArray *receivingAccounts;
@property (readonly, nonatomic) NSArray *deliveryAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initInternal;
- (id)initWithRemoteConnection:(id)a0;
- (void)accountsRemoved:(id)a0;
- (id)accountForAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)didBeginObserving;
- (void)_postAccountChangedNotification;
- (void)dealloc;
- (void)accountsChanged:(id)a0;
- (id)_currentAccountsByObjectIDMap;
- (void)_fetchAccountsAndObserveChanges;
- (void)requestAccounts;
- (void)didEndObserving;
- (id)accountForIdentifier:(id)a0;
- (void)accountsAdded:(id)a0;

@end
