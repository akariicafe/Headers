@class NSString, HMDCharacteristicsAvailabilityListener, NSNotificationCenter, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue;

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener;
@property (readonly, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) Class doorbellBulletinUtilitiesClass;
@property (readonly) double doorbellChimeMaximumAnnounceDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)postCULiveAction:(id)a0;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;

@end
