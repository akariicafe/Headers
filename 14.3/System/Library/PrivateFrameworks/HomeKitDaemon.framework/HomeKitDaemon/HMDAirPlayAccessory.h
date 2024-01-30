@class NSString, HMFPairingIdentity, HMFExponentialBackoffTimer;

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>

@property (readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer;
@property (readonly, copy) NSString *password;
@property (readonly) long long minimumUserPriviledge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL supportsDisassociation;
@property (readonly) BOOL supportsUserManagement;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)setReachable:(BOOL)a0;
- (void)removeUser:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)advertisement;
- (void)setAdvertisement:(id)a0;
- (void)setPairingIdentity:(id)a0;
- (void)setPassword:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)backingStoreObjects:(long long)a0;
- (void)configureWithHome:(id)a0 msgDispatcher:(id)a1 configurationTracker:(id)a2 initialConfiguration:(BOOL)a3;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (void)disassociateWithCompletionHandler:(id /* block */)a0;
- (BOOL)supportsMinimumUserPrivilege;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (id)messageSendPolicy;
- (void)addUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)pairingsWithCompletionHandler:(id /* block */)a0;
- (void)_handleUpdatedName:(id)a0;
- (void)populateModelObject:(id)a0 version:(long long)a1;
- (void)handleUpdatedAdvertisement:(id)a0;
- (void)setMinimumUserPriviledge:(long long)a0;
- (void)disassociateUser:(id)a0 completionHandler:(id /* block */)a1;

@end
