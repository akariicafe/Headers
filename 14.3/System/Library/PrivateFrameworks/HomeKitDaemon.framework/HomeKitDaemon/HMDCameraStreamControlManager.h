@class HMDCameraStreamMetrics, HMDCameraStreamSessionID, HMDService, NSString, HMDCameraStreamSnapshotHandler, NSObject, NSNumber, HMDAccessory;
@protocol OS_dispatch_queue, HMDCameraStreamControlManagerDelegate;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging>

@property (readonly, weak, nonatomic) id<HMDCameraStreamControlManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) HMDService *streamManagementService;
@property (retain, nonatomic) NSNumber *slotIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)managerProtocol;
- (void)_reportError:(id)a0;
- (id)logIdentifier;
- (void)_callStreamStopped:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 accessory:(id)a5 streamManagementService:(id)a6 isLocal:(BOOL)a7;
- (void)_reportInternalErrorCode:(long long)a0;
- (void)_reportErrorCode:(long long)a0;
- (void)_callStreamNegotiated:(id)a0;
- (void)_cleanUpStreamSession:(id)a0;
- (void)_callStreamStarted;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamFirstFrameReceived:(unsigned long long)a0 aspectRatio:(id)a1 slotIdentifier:(id)a2;
- (void)_callStreamReconfigured;

@end
