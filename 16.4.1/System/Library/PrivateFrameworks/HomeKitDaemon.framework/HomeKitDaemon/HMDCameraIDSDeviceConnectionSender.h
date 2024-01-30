@class HMFOSTransaction, AVCPacketRelay, NSNumber, NSString, NSObject, HMDDevice;
@protocol OS_dispatch_queue, HMDCameraIDSDeviceConnectionSenderDelegate;

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol>

@property (readonly) HMDDevice *device;
@property (retain) AVCPacketRelay *videoPacketRelay;
@property (retain) AVCPacketRelay *audioPacketRelay;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (weak) id<HMDCameraIDSDeviceConnectionSenderDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSNumber *mtu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_socketOpenedWithError:(id)a0;
- (void)_startAudioPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;
- (void)_startPacketRelayWithIDSDeviceSession:(id)a0 cameraVideoSSRC:(unsigned int)a1 cameraAudioSSRC:(unsigned int)a2;
- (void)_startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)_startVideoPacketRelay:(int)a0 ipAddress:(id)a1 port:(unsigned long long)a2;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 idsProxyStreamService:(id)a5;
- (void)openRelaySession;
- (void)startPacketRelayWithIDSDeviceSession:(id)a0 cameraVideoSSRC:(unsigned int)a1 cameraAudioSSRC:(unsigned int)a2;
- (void)startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;

@end
