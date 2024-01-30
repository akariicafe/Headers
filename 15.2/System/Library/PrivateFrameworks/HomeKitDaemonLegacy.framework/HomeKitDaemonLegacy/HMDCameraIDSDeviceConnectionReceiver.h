@class IDSSession, NSString, NSObject;
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol>

@property (weak) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) int remoteAudioSocket;
@property (readonly, nonatomic) int remoteVideoSocket;
@property (readonly) IDSSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)setUpRemoteConnectionWithDevice:(id)a0;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_socketOpenedWithError:(id)a0;

@end
