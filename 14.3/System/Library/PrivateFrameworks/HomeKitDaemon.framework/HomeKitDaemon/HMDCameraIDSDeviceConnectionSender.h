@class HMFOSTransaction, NSString, AVCPacketRelay, NSObject, NSNumber;
@protocol OS_dispatch_queue, HMDCameraIDSDeviceConnectionSenderDelegate;

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol>

@property (readonly, weak, nonatomic) id<HMDCameraIDSDeviceConnectionSenderDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy, nonatomic) NSString *destinationID;
@property (retain, nonatomic) AVCPacketRelay *videoPacketRelay;
@property (retain, nonatomic) AVCPacketRelay *audioPacketRelay;
@property (retain, nonatomic) HMFOSTransaction *packetRelayTransaction;
@property (readonly, nonatomic) NSNumber *mtu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 destinationID:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (void)openRelaySession;
- (void)startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)startPacketRelayWithIDSDeviceSession:(id)a0 cameraVideoSSRC:(unsigned int)a1 cameraAudioSSRC:(unsigned int)a2;
- (void)_callSessionEnded:(id)a0;
- (void)_startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)_socketOpened:(id)a0;
- (void)_startPacketRelayWithIDSDeviceSession:(id)a0 cameraVideoSSRC:(unsigned int)a1 cameraAudioSSRC:(unsigned int)a2;
- (void)_startVideoPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;
- (void)_startAudioPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;

@end
