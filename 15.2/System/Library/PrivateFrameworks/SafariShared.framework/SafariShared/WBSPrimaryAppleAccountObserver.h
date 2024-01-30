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

- (void)accountWasModified:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accountWasAdded:(id)a0;
- (void)_setAccountOnInternalQueue:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (void)_registerForUpdates;
- (void)_setAccountIfPrimary:(id)a0;
- (void)getPrimaryAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:(id /* block */)a0;

@end
