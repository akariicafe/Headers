@class HMFNetMonitor, NSArray, NSString, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetMonitor *_netMonitor;
    NSMutableOrderedSet *_assets;
}

@property (class, readonly) HMDSoftwareUpdateDocumentationManager *sharedManager;

@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)removeAsset:(id)a0;
- (void)networkMonitorIsReachable:(id)a0;
- (void)addAsset:(id)a0;
- (id)assetForDocumentationMetadata:(id)a0;
- (void)unregisterDocumentationMetadata:(id)a0;
- (void)registerDocumentationMetadata:(id)a0;
- (void)parseCachedAssets;
- (void)auditAsset:(id)a0;

@end
