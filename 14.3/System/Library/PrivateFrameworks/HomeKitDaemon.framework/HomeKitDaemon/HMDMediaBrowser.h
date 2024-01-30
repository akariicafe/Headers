@class NSString, HMFTimer, HMDHomeManager, NSArray, HMFMessageDispatcher, NSMutableSet, HMDUnassociatedMediaAccessory, NSObject;
@protocol HMDMediaBrowserDataSource, HMFLocking, OS_dispatch_queue, HMDMediaBrowserDelegate;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    id<HMFLocking> _lock;
    NSMutableSet *_accessoryAdvertisements;
    BOOL _discoverUnassociatedAccessories;
    BOOL _discoverAssociatedAccessories;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) void *discoverySession;
@property (nonatomic) void *discoverySessionCallbackToken;
@property (retain, nonatomic) HMFTimer *discoveryPollTimer;
@property (nonatomic) BOOL updateAvailableOutputDevices;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) NSMutableSet *identifiersOfAssociatedMediaAccessories;
@property (retain, nonatomic) NSMutableSet *mediaEndpoints;
@property (readonly) id<HMDMediaBrowserDataSource> dataSource;
@property (weak) id<HMDMediaBrowserDelegate> delegate;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)advertisementsFromOutputDevices:(struct __CFArray { } *)a0;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (void)dealloc;
- (id)shortDescription;
- (void)timerDidFire:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (id)dumpDescription;
- (void)updateSessionsForAccessories:(id)a0;
- (void)registerAccessories:(id)a0;
- (void)stopDiscoveringAssociatedAccessories;
- (void)startDiscoveringAssociatedAccessories;
- (void)_startDiscoveringAccessories;
- (id)unassociatedAccessoryFromAdvertisementData:(id)a0;
- (void)deregisterAccessories:(id)a0;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)a0;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)a0;
- (void)checkForUpdatedAvailableOutputDevices:(struct __CFArray { } *)a0;
- (void)_handleAvailableOutputDevices:(struct __CFArray { } *)a0;
- (void)_removeAdvertisements:(id)a0;
- (void)_stopDiscoveringAccessories;
- (void)_addAdvertisements:(id)a0;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)a0;
- (void)_updateSessionsForAccessories:(id)a0;
- (void)_updateSessionForAccessory:(id)a0;

@end
