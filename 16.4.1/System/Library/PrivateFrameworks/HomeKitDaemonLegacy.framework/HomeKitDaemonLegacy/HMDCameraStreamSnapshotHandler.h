@class NSString, NSMutableDictionary, NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSMapTable *_delegateTable;
}

@property (readonly) NSString *logIdentifier;
@property (readonly, getter=isStreamAvailable) BOOL streamAvailable;
@property (readonly, getter=isStreamSetupInProgress) BOOL streamSetupInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0 delegateQueue:(id)a1;
- (void)addVideoStreamInterface:(id)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithWorkQueue:(id)a0 services:(id)a1 logID:(id)a2;
- (void)removeVideoStreamInterface:(id)a0;
- (void)setStreamSetupStatusForService:(id)a0 inProgress:(BOOL)a1;
- (void)streamSnapshotCapture:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotCapture:(id)a0 didGetNewSnapshot:(id)a1;

@end
