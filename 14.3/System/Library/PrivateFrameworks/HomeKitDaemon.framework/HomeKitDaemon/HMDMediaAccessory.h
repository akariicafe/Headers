@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSString;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>

@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)urlString;
- (long long)reachableTransports;
- (id)init;
- (void).cxx_destruct;
- (void)setAdvertisement:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)name;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)configureWithHome:(id)a0 msgDispatcher:(id)a1 configurationTracker:(id)a2 initialConfiguration:(BOOL)a3;
- (unsigned long long)supportedTransports;
- (void)setRemotelyReachable:(BOOL)a0;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (void)addAdvertisement:(id)a0;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (void)removeAdvertisement:(id)a0;
- (id)assistantObject;
- (BOOL)_shouldFilterAccessoryProfile:(id)a0;
- (BOOL)providesHashRouteID;
- (id)dumpSimpleState;
- (void)handleRoomChanged:(id)a0;
- (void)handleRoomNameChanged:(id)a0;
- (id)_createMediaProfile;
- (void)handleUpdatedAdvertisement:(id)a0;
- (void)notifyConnectivityChangedWithReachabilityState:(BOOL)a0;

@end
