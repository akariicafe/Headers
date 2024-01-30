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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)setAdvertisement:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)supportedTransports;
- (void)_registerForMessages;
- (long long)reachableTransports;
- (void)addAdvertisement:(id)a0;
- (id)dumpSimpleState;
- (id)_createMediaProfile;
- (BOOL)_shouldFilterAccessoryProfile:(id)a0;
- (void)addHostedAccessory:(id)a0;
- (void)handleRoomChanged:(id)a0;
- (void)handleRoomNameChanged:(id)a0;
- (void)handleUpdatedAdvertisement:(id)a0;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (void)notifyConnectivityChangedWithReachabilityState:(BOOL)a0;
- (BOOL)providesHashRouteID;
- (void)removeAdvertisement:(id)a0;
- (void)removeHostedAccessory:(id)a0;
- (void)setRemotelyReachable:(BOOL)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)transportReports;

@end
