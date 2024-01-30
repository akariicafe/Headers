@class NSString, NSUUID, NSNotificationCenter, NSMutableSet, NSObject;
@protocol HMDPrimaryResidentCapabilitiesAggregatorDataSource, HMDPrimaryResidentCapabilitiesAggregatorDelegate, OS_dispatch_queue;

@interface HMDPrimaryResidentCapabilitiesAggregator : NSObject <HMEEventConsumer, HMFLogging> {
    BOOL _isPrimaryResident;
    id<HMDPrimaryResidentCapabilitiesAggregatorDataSource> _dataSource;
    id<HMDPrimaryResidentCapabilitiesAggregatorDelegate> _delegate;
    NSUUID *_homeUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSMutableSet *_accessories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)accessoryCapabilitiesForAccessory:(id)a0 ifDifferentFrom:(id)a1;
- (void)didAddAccessory:(id)a0;
- (void)didRemoveAccessory:(id)a0;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 queue:(id)a2 notificationCenter:(id)a3 homeUUID:(id)a4 accessories:(id)a5;
- (id)publicPairingIdentityForAccessory:(id)a0 ifDifferentFrom:(id)a1;
- (id)residentCapabilitiesForAccessory:(id)a0 ifDifferentFrom:(id)a1;
- (void)startIfPrimaryResident;

@end
