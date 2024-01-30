@class IDSSession, NSString, NSObject;
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol>

@property (weak, nonatomic) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) int remoteAudioSocket;
@property (readonly, nonatomic) int remoteVideoSocket;
@property (readonly, nonatomic) IDSSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)setupReceiver:(id)a0;
- (void)_callSessionEnded:(id)a0;
- (void)_socketOpened:(id)a0;

@end
