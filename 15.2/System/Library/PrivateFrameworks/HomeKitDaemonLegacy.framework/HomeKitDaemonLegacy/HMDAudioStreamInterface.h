@class NSNumber, NSString;
@protocol HMDAudioStreamInterfaceDataSource, HMDAudioStreamInterfaceDelegate, HMDAVCAudioStream;

@interface HMDAudioStreamInterface : HMDStreamInterface <HMFLogging, AVCAudioStreamDelegate>

@property (readonly) id<HMDAVCAudioStream> audioStream;
@property (readonly) id<HMDAudioStreamInterfaceDataSource> dataSource;
@property BOOL streamStarted;
@property unsigned long long audioStreamSetting;
@property (getter=isMuted) BOOL muted;
@property (getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property double rtpTimeOutIntervalSec;
@property double rtcpTimeOutIntervalSec;
@property double rtcpSendIntervalSec;
@property (copy) id /* block */ stopStreamCompletionHandler;
@property (readonly, copy) NSNumber *syncSource;
@property (weak) id<HMDAudioStreamInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopStream;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 localNetworkConfig:(id)a5;
- (void)startStreamWithConfig:(id)a0;
- (void)_startStreamWithConfig:(id)a0;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)startSynchronizationWithVideoStreamToken:(long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 audioStream:(id)a5 localRTPSocket:(int)a6 dataSource:(id)a7;
- (id)_createAudioStreamWithSessionHandler:(id)a0 localNetworkConfig:(id)a1 localRTPSocket:(int *)a2;
- (id)_createStreamWithRemoteDestinationReceiver:(id)a0;
- (id)_createStreamWithRemoteSocketReceiver:(id)a0;
- (int)_createLocalRTPSocketWithRemoteSender:(id)a0 localNetworkConfig:(id)a1;
- (id)_createLocalStreamAndRTPSocket:(int *)a0 localNetworkConfig:(id)a1;
- (void)_updateAudioSetting:(unsigned long long)a0;
- (void)_stopStreamWithCompletion:(id /* block */)a0;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)_callPaused:(id)a0;
- (void)_callResumed:(id)a0;

@end
