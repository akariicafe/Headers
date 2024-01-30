@class NSString, HMSoftwareUpdateDescriptor, HMDAccessory;
@protocol HMELastEventStoreReadHandle, HMESubscriptionProviding;

@interface HMDSoftwareUpdateEventListenerContext : HMFObject <HMFLogging>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly, copy) NSString *topicForSoftwareUpdateDescriptor;
@property (readonly) long long softwareUpdateStatusForLastEvent;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)a0;
- (id)initWithAccessory:(id)a0 subscriptionProvider:(id)a1 eventStoreReadHandle:(id)a2;
- (void)updateAppBadgeAndBulletinNotification;

@end
