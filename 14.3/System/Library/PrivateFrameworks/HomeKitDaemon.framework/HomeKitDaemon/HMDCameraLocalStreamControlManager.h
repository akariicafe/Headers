@class HMDCameraSupportedConfigurationCache, HMDCameraMediaConfigGenerator, NSString, HMDCameraStreamMetrics, HMDCameraLocalStreamSession;

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (retain, nonatomic) HMDCameraLocalStreamSession *streamSession;
@property (retain, nonatomic) HMDCameraMediaConfigGenerator *configGenerator;
@property (retain, nonatomic) HMDCameraSupportedConfigurationCache *supportedConfigCache;
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
- (void)streamingManagerDidStartRelay:(id)a0;
- (void)streamingManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamingManagerDidNetworkImprove:(id)a0;
- (void)streamingManagerDidNetworkDeteriorate:(id)a0;
- (void)streamingManagerDidUpdateConfiguration:(id)a0;
- (void)sessionInitiator:(id)a0 didSetup:(id)a1;
- (void)sessionInitiator:(id)a0 didEndSession:(id)a1;
- (void)_stopCurrentStreamSession:(id)a0;
- (void)_negotiateStream;
- (void)_cleanUpStreamSession:(id)a0;
- (void)_reconfigureStream:(id)a0;
- (void)_reconfigureStreams;
- (void)_sendUpdatedConfiguration;
- (void)deviceConnectionSender:(id)a0 didSetup:(id)a1;
- (void)deviceConnectionSender:(id)a0 didEndSession:(id)a1;
- (void)negotiateStream;
- (void)reconfigureStream:(id)a0;
- (void)stopStream:(id)a0;
- (void)remoteSetup:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 accessory:(id)a7 streamManagementService:(id)a8 remoteCapabilities:(id)a9 supportedConfigCache:(id)a10 streamPreference:(id)a11;
- (void)_writeSetupEndPoint;
- (void)_getSupportedConfigurations;
- (void)_handleSupportedParameters:(id)a0;
- (void)_sendSetupEndPointRead;
- (void)_handleSetupEndPointRead:(id)a0;
- (BOOL)_validateSetupEndPointReadWithWrite;
- (id)_calculateMTU;
- (void)_startStreamingManager;
- (void)_writeStopConfig:(id)a0;
- (void)_writeSelectConfig:(id)a0 reconfigure:(BOOL)a1;
- (void)_writeStartConfig;
- (void)_writeReselectConfig;

@end
