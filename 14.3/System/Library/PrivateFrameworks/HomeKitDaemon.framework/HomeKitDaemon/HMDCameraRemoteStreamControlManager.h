@class NSUUID, HMDCameraRemoteStreamSession, HMDCameraMediaConfigGenerator, NSString, HMDCameraStreamMetrics, HMDCameraResidentMessageHandler;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (retain, nonatomic) HMDCameraRemoteStreamSession *streamSession;
@property (retain, nonatomic) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_streamStarted;
- (void)startStream:(id)a0;
- (void)_startStream:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)streamingManager:(id)a0 didStartStream:(id)a1 slotIdentifier:(id)a2;
- (void)streamingManagerDidReceiveFirstFrame:(id)a0 audioStreamSetting:(unsigned long long)a1 aspectRatio:(id)a2 slotIdentifier:(id)a3;
- (void)streamingManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamingManagerDidNetworkImprove:(id)a0;
- (void)streamingManagerDidNetworkDeteriorate:(id)a0;
- (void)streamingManagerDidUpdateConfiguration:(id)a0;
- (void)deviceConnectionReceiver:(id)a0 didSetup:(id)a1;
- (void)deviceConnectionReceiver:(id)a0 didEndSession:(id)a1;
- (void)_stopCurrentStreamSession:(id)a0;
- (void)_negotiateStream;
- (void)_setParametersSelected:(id)a0;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_cleanUpStreamSession:(id)a0;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)a0 audioSSRC:(id)a1;
- (void)_reconfigureStream:(id)a0;
- (void)_dispatchReconfigureToResident:(id)a0;
- (void)_remoteSetup:(id)a0;
- (void)_sendStopMessageToResident;
- (void)_relaySessionStarted:(id)a0;
- (void)stopStreamAsIDSHasStopped:(id)a0;
- (void)_reconfigureStreams;
- (void)_sendUpdatedConfiguration;
- (void)sessionReceiver:(id)a0 didSetup:(id)a1;
- (void)sessionReceiver:(id)a0 didEndSession:(id)a1;
- (void)deviceConnectionSender:(id)a0 didSetup:(id)a1;
- (void)deviceConnectionSender:(id)a0 didEndSession:(id)a1;
- (void)negotiateStream;
- (void)reconfigureStream:(id)a0;
- (void)stopStream:(id)a0;
- (void)remoteSetup:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 destinationID:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 accessory:(id)a7 streamManagementService:(id)a8 remoteCapabilities:(id)a9 profileUniqueIdentifier:(id)a10 residentMessageHandler:(id)a11 streamPreference:(id)a12;

@end
