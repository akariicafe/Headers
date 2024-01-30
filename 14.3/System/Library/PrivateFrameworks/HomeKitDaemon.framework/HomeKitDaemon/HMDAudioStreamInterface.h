@class NSNumber, AVCAudioStream, NSString;
@protocol HMDAudioStreamInterfaceDelegate;

@interface HMDAudioStreamInterface : HMDStreamInterface <HMFLogging, AVCAudioStreamDelegate>

@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (copy) id /* block */ stopStreamCompletionHandler;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (retain, nonatomic) AVCAudioStream *audioStream;
@property (readonly, weak) id<HMDAudioStreamInterfaceDelegate> delegate;
@property (nonatomic) BOOL streamStarted;
@property (nonatomic) unsigned long long audioStreamSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)stopStream;
- (void)dealloc;
- (void)streamDidStop:(id)a0;
- (id)logIdentifier;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)setRtcpSendInterval:(double)a0;
- (void)startStream:(id)a0;
- (BOOL)_createLocalSocket;
- (BOOL)_initializeStreamRemoteSender:(id)a0;
- (BOOL)_initializeStreamRemoteDestinationReceiver:(id)a0;
- (BOOL)_initializeStreamRemoteSocketReceiver:(id)a0;
- (BOOL)_initializeStreamRemoteLocal;
- (void)_startStream:(id)a0;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 localNetworkConfig:(id)a5;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)_updateAudioSetting:(unsigned long long)a0;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)_stopStreamWithCompletion:(id /* block */)a0;
- (void)_callPaused:(id)a0;
- (void)_callResumed:(id)a0;

@end
