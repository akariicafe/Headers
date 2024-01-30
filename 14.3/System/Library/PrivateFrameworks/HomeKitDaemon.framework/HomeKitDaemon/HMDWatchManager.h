@class NSArray, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) IDSService *service;
@property (readonly, copy) NSArray *watches;
@property (readonly, copy) NSArray *connectedWatches;
@property (readonly, getter=isPairedWithWatch) BOOL pairedWithWatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)sharedManager;
+ (BOOL)isCompatibleWatchDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)attributeDescriptions;
- (void)__initializeConnectedDevices;
- (id)connectedWatchFromDeviceID:(id)a0;

@end
