@class NSUUID, HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, NSString, HMDCameraStreamMetrics, HMDCameraResidentMessageHandler;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (retain) HMDCameraRemoteStreamSession *streamSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_streamStarted;
- (void)setUpRemoteConnectionWithDevice:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)streamingManagerDidUpdateConfiguration:(id)a0;
- (void)streamingManagerDidNetworkDeteriorate:(id)a0;
- (void)streamingManagerDidNetworkImprove:(id)a0;
- (void)streamingManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamingManagerDidReceiveFirstFrame:(id)a0 audioStreamSetting:(unsigned long long)a1 aspectRatio:(id)a2 slotIdentifier:(id)a3;
- (void)streamingManager:(id)a0 didStartStream:(id)a1 slotIdentifier:(id)a2;
- (void)deviceConnectionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)negotiateStream;
- (void)startStreamWithRemoteSettings:(id)a0;
- (void)reconfigureStream:(id)a0;
- (void)stopStreamWithError:(id)a0;
- (void)deviceConnectionSender:(id)a0 didSetUpWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didEndSessionWithError:(id)a1;
- (void)sessionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)sessionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 accessory:(id)a7 streamManagementService:(id)a8 remoteCapabilities:(id)a9 profileUniqueIdentifier:(id)a10 residentMessageHandler:(id)a11 remoteAccessDevice:(id)a12 streamPreference:(id)a13;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 accessory:(id)a5 streamManagementService:(id)a6 profileUniqueIdentifier:(id)a7 residentMessageHandler:(id)a8 streamSession:(id)a9;
- (void)_negotiateStream;
- (void)_setParametersSelected:(id)a0;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_relaySessionStarted:(id)a0;
- (void)_startStreamWithRemoteSettings:(id)a0;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)a0 audioSSRC:(id)a1;
- (void)_reconfigureStream:(id)a0;
- (void)_setUpRemoteConnectionWithDevice:(id)a0;
- (void)_stopCurrentStreamSessionWithError:(id)a0;
- (void)_sendStopMessageToResident;
- (void)_cleanUpStreamSessionWithError:(id)a0;
- (void)_reconfigureStreams;
- (void)_dispatchReconfigureToResident:(id)a0;
- (void)_sendUpdatedConfiguration;

@end
