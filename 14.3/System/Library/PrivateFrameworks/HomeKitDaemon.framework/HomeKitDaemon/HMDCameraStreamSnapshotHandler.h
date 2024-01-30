@class NSString, NSMutableDictionary, NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {
    id<HMFLocking> _lock;
}

@property (readonly) NSMutableSet *streamSnapshotCaptures;
@property (readonly) NSMutableSet *retiredStreamSnapshotCaptures;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) NSString *logID;
@property (readonly) NSMutableDictionary *serviceInstanceStreamStatus;
@property (readonly) NSMapTable *delegateTable;
@property (readonly, getter=isStreamAvailable) BOOL streamAvailable;
@property (readonly, getter=isStreamSetupInProgress) BOOL streamSetupInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)getSnapshot:(unsigned long long)a0;
- (void)removeVideoStreamInterface:(id)a0;
- (void)addVideoStreamInterface:(id)a0;
- (void)callStreamSetupInProgress:(BOOL)a0;
- (void)setStreamSetupInProgress:(BOOL)a0;
- (void)setStreamAvailable:(BOOL)a0;
- (void)_callDidGetNewSnapshot:(id)a0;
- (void)_callDidGetLastSnapshot:(id)a0;
- (void)_callStreamSetupInProgress:(BOOL)a0;
- (void)streamSnapshotCapture:(id)a0 didGetNewSnapshot:(id)a1;
- (void)streamSnapshotCapture:(id)a0 didGetLastSnapshot:(id)a1;
- (id)initWithWorkQueue:(id)a0 services:(id)a1 logID:(id)a2;
- (void)addDelegate:(id)a0 delegateQueue:(id)a1;
- (void)setStreamSetupStatusForService:(id)a0 inProgress:(BOOL)a1;

@end
