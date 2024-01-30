@class HMDDevice, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) IDSService *service;
@property (readonly) HMDDevice *companion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)sharedManager;
+ (BOOL)isCompatibleCompanionDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)attributeDescriptions;
- (void)__initializeConnectedDevices;

@end
