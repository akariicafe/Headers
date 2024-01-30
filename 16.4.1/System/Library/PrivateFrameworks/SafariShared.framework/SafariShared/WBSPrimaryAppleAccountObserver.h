@class ACMonitoredAccountStore, NSString, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPrimaryAppleAccountObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    ACMonitoredAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
    NSString *_primaryAccountAltDSID;
}

@property (class, readonly, nonatomic) WBSPrimaryAppleAccountObserver *sharedObserver;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)_setAccountOnInternalQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForUpdates;
- (void)_setAccountIfPrimary:(id)a0;
- (void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:(id /* block */)a0;
- (void)getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)a0;
- (void)getPrimaryAppleAccountWithCompletionHandler:(id /* block */)a0;

@end
