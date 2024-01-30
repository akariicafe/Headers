@class HMDCameraNetworkConfig, AVCPacketRelay, HMFOSTransaction, NSString, NSNumber, NSObject, HMDDevice;
@protocol OS_dispatch_queue, HMDCameraIDSSessionInitiatorDelegate;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <AVCPacketRelayDelegate, IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol>

@property (readonly, weak, nonatomic) id<HMDCameraIDSSessionInitiatorDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig;
@property (retain, nonatomic) AVCPacketRelay *packetRelay;
@property (retain, nonatomic) HMFOSTransaction *packetRelayTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *mtu;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)session:(id)a0 receivedInvitationAcceptFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationDeclineFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationCancelFromID:(id)a1;
- (id)logIdentifier;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)packetRelay:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)packetRelay:(id)a0 didStop:(BOOL)a1 error:(id)a2;
- (void)openRelaySession;
- (void)startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)_sendInvitation;
- (void)_callSessionEnded:(id)a0;
- (void)_startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)_callSessionStarted:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 localNetworkConfig:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;

@end
