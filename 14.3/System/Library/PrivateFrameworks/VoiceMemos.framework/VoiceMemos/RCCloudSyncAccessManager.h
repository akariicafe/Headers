@class NSString, ACMonitoredAccountStore, RCManagedConfigurationHelper;
@protocol RCCloudSyncAccessManagerDelegate;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate> {
    ACMonitoredAccountStore *_accountStore;
    long long _startMonitoringOnceToken;
    RCManagedConfigurationHelper *_managedConfigurationHelper;
    int _tccNotifyToken;
}

@property (readonly) ACMonitoredAccountStore *accountStore;
@property (weak, nonatomic) id<RCCloudSyncAccessManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL cloudSyncIsAvailable;
@property (nonatomic) int tccCloudAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_availabilityChanged;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accountWasRemoved:(id)a0;
- (void)managedConfigurationUpdated:(BOOL)a0;
- (void)startMonitoringAccountChanges;
- (void)accountWasAdded:(id)a0;

@end
