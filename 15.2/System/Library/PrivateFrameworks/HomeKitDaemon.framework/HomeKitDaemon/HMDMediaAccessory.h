@class NSString, NSDictionary, HMDMediaAccessoryAdvertisement, HMDMediaProfile;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setAdvertisement:(id)a0;
- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)name;
- (unsigned long long)supportedTransports;
- (void)_registerForMessages;
- (long long)reachableTransports;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (void)removeAdvertisement:(id)a0;
- (void)addAdvertisement:(id)a0;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (void)setRemotelyReachable:(BOOL)a0;
- (void)configureWithHome:(id)a0 msgDispatcher:(id)a1 configurationTracker:(id)a2 initialConfiguration:(BOOL)a3;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (id)transportReports;
- (id)dumpSimpleState;
- (BOOL)_shouldFilterAccessoryProfile:(id)a0;
- (BOOL)providesHashRouteID;
- (void)handleRoomNameChanged:(id)a0;
- (void)handleRoomChanged:(id)a0;
- (id)_createMediaProfile;
- (void)handleUpdatedAdvertisement:(id)a0;
- (void)notifyConnectivityChangedWithReachabilityState:(BOOL)a0;

@end
