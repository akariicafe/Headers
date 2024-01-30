@class NSArray, NSString, NSHashTable, HMAccessoryBrowser, SFDeviceDiscovery, NSMutableSet;

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate>

@property (nonatomic) BOOL isBrowsing;
@property (retain, nonatomic) HMAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) SFDeviceDiscovery *sharingDeviceBrowser;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableSet *mutableDiscoveredSharingDevices;
@property (readonly, nonatomic) NSArray *discoveredHMAccessories;
@property (readonly, nonatomic) NSArray *discoveredSharingDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startSearchingForNewAccessories;
- (void)accessoryBrowser:(id)a0 didFindNewAccessory:(id)a1;
- (void)accessoryBrowser:(id)a0 didRemoveNewAccessory:(id)a1;
- (void)stopSearchingForNewAccessoriesWithError:(id)a0;
- (void)addBrowsingObserver:(id)a0;
- (void)removeBrowsingObserver:(id)a0;

@end
