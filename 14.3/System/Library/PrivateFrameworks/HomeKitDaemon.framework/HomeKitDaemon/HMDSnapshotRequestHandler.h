@class NSString, HMFTimer, HMDSnapshotFile, NSSet, HMDCameraStreamSnapshotHandler, NSObject, NSMutableArray, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSString *logString;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;
@property (retain, nonatomic) HMFTimer *mostRecentSnapshotInvalidationTimer;
@property (retain, nonatomic) HMDSnapshotFile *mostRecentSnapshot;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (copy, nonatomic) NSSet *supportedResolutions;
@property (readonly, nonatomic) NSString *imageCacheDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)streamSnapshotHandler:(id)a0 didGetNewSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didGetLastSnapshot:(id)a1;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 imageCacheDirectory:(id)a3 logID:(id)a4;
- (void)_getSupportedVideoResolutions:(id)a0 streamingTierType:(unsigned long long)a1;
- (void)_sendSnapshotRequest:(id)a0 streamingTierType:(unsigned long long)a1;
- (void)_updateSnapshotOptions:(id)a0 withAccessory:(id)a1 snapshotReason:(unsigned long long)a2;
- (void)_handleImageResourceData:(id)a0 error:(id)a1 requestedResolution:(id)a2 snapshotDataTrasaction:(id)a3;
- (id)_resolutionToRequest:(unsigned long long)a0;
- (id)_snapshotRequestOptions:(unsigned long long)a0 resolution:(id)a1 accessory:(id)a2;
- (id)_supportedResolutionWithType:(unsigned long long)a0;
- (void)_handleSupportedParameters:(id)a0 sessionID:(id)a1 streamingTierType:(unsigned long long)a2;
- (void)_prepareSupportedResolutionsWithVideoConfiguration:(id)a0;
- (id)_saveSnapshotFile:(id)a0;

@end
