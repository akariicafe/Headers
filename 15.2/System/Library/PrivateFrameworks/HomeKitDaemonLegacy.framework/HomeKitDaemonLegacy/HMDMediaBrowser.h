@class HMDUnassociatedMediaAccessory, HMDHomeManager, NSArray, NSString, NSMutableSet, NSObject, HMFTimer;
@protocol HMDMediaBrowserDataSource, HMFLocking, OS_dispatch_queue, HMDMediaBrowserDelegate;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    id<HMFLocking> _lock;
    NSMutableSet *_accessoryAdvertisements;
    BOOL _discoverUnassociatedAccessories;
    BOOL _discoverAssociatedAccessories;
    BOOL _updateAvailableOutputDevices;
    NSObject<OS_dispatch_queue> *_clientQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id<HMDMediaBrowserDataSource> _dataSource;
}

@property (weak) id<HMDMediaBrowserDelegate> delegate;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)advertisementsFromOutputDevices:(struct __CFArray { } *)a0;

- (id)initWithHomeManager:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)shortDescription;
- (id)dumpDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (void)updateSessionsForAccessories:(id)a0;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)deregisterAccessories:(id)a0;
- (void)registerAccessories:(id)a0;
- (id)unassociatedAccessoryFromAdvertisementData:(id)a0;
- (void)startDiscoveringAssociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;

@end
