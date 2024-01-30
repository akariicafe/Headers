@class HMDCameraSupportedConfigurationCache, HMDCameraMediaConfigGenerator, NSString, HMDCameraStreamMetrics, NSNumber, HMDCameraLocalStreamSession;

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (retain) HMDCameraLocalStreamSession *streamSession;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache;
@property (readonly, getter=isSendingStream) BOOL sendingStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_streamStarted;
- (void)_cleanUpStreamSessionWithError:(id)a0;
- (void)_startStreamWithRemoteSettings:(id)a0;
- (void)negotiateStream;
- (void)_writeSelectConfig:(id)a0 reconfigure:(BOOL)a1;
- (void)_addServerStreamSession;
- (id)_calculateMTU;
- (void)_getSupportedConfigurations;
- (void)_handleSetupEndPointRead:(id)a0;
- (void)_handleSupportedParameters:(id)a0;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)a0;
- (void)_reconfigureStreams;
- (void)_removeServerStreamSession;
- (void)_sendSetupEndPointRead;
- (void)_sendUpdatedConfiguration;
- (void)_startStreamingManager;
- (void)_stopCurrentStreamSessionWithError:(id)a0;
- (BOOL)_validateSetupEndPointReadWithWrite;
- (void)_writeReselectConfig;
- (void)_writeSetupEndPoint;
- (void)_writeStartConfig;
- (void)_writeStopConfig:(id)a0;
- (void)deviceConnectionSender:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didSetUpWithError:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 accessory:(id)a5 streamManagementService:(id)a6 supportedConfigCache:(id)a7 streamSession:(id)a8;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 accessory:(id)a7 streamManagementService:(id)a8 localNetworkConfig:(id)a9 remoteCapabilities:(id)a10 supportedConfigCache:(id)a11 streamPreference:(id)a12;
- (void)reconfigureStream:(id)a0;
- (void)sessionInitiator:(id)a0 didEndSessionWithError:(id)a1;
- (void)sessionInitiator:(id)a0 didSetUpWithError:(id)a1;
- (void)setUpRemoteConnectionWithDevice:(id)a0;
- (void)startStreamWithRemoteSettings:(id)a0;
- (void)stopStreamWithError:(id)a0;
- (void)streamingManager:(id)a0 didStartStreamWithError:(id)a1;
- (void)streamingManagerDidNetworkDeteriorate:(id)a0;
- (void)streamingManagerDidNetworkImprove:(id)a0;
- (void)streamingManagerDidReceiveFirstFrame:(id)a0;
- (void)streamingManagerDidStartRelay:(id)a0;
- (void)streamingManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamingManagerDidUpdateConfiguration:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;

@end
