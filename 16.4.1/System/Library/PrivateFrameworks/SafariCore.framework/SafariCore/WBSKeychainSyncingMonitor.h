@class ACMonitoredAccountStore, NSString, OTClique, NSObject;
@protocol OS_dispatch_queue;

@interface WBSKeychainSyncingMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    OTClique *_keychainClique;
    NSString *_primaryAppleAccountAltDSID;
}

@property (class, readonly, nonatomic) WBSKeychainSyncingMonitor *sharedMonitor;

@property (readonly, nonatomic, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (id)init;
- (void)accountCredentialChanged:(id)a0;
- (void).cxx_destruct;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_updateAccountOnInternalQueue:(id)a0;
- (void)_updateKeychainClique;

@end
