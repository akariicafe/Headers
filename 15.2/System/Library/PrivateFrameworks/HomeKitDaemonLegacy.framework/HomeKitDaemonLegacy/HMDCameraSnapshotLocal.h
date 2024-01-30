@class HMDCameraSnapshotSessionID, NSString, HMDAccessory, NSDictionary, HMDSnapshotFile, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotLocalDelegate, HMDSnapshotRequestHandlerProtocol;

@interface HMDCameraSnapshotLocal : HMFObject <HMDCameraGetSnapshotProtocol, HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotLocalDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) id<HMDSnapshotRequestHandlerProtocol> snapshotRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 options:(id)a2 accessory:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 snapshotRequestHandler:(id)a6;
- (void)_getSnapshot:(unsigned long long)a0;
- (void)_handleSnapshotFile:(id)a0 error:(id)a1;
- (void)_callDelegate:(id)a0 error:(id)a1;

@end
