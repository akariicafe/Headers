@class AVConferenceXPCClient, NSString, NSDictionary, AVCMediaStreamConfig, VCAudioStream, NSObject;
@protocol OS_dispatch_queue;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate> {
    AVConferenceXPCClient *_connection;
    VCAudioStream *_opaqueStream;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _streamToken;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCMediaStreamConfig *configuration;
@property (nonatomic) long long direction;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (nonatomic) float volume;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capabilities;

- (void)vcMediaStreamDidRTPTimeOut:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)vcMediaStream:(id)a0 updateFrequencyLevel:(id)a1 isInputMeter:(BOOL)a2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)vcMediaStreamDidStop:(id)a0;
- (void)pause;
- (void)start;
- (void)resume;
- (void)vcMediaStream:(id)a0 didPauseStream:(BOOL)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didStartStream:(BOOL)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didReceiveDTMFEventWithDigit:(char)a1;
- (void)vcMediaStream:(id)a0 didResumeStream:(BOOL)a1 error:(id)a2;
- (BOOL)configure:(id)a0 error:(id *)a1;
- (id)initWithNetworkSockets:(id)a0 isOriginator:(BOOL)a1 callID:(id)a2 error:(id *)a3;
- (void)startContinuousDTMFWithDigit:(char)a0 volume:(unsigned char)a1;
- (void)stopContinuousDTMF;
- (void)sendDTMFDigitString:(id)a0 withVolume:(unsigned char)a1 duration:(unsigned short)a2 interval:(unsigned short)a3;
- (void)refreshLoggingParameters;
- (id)initWithLocalAddress:(id)a0 networkSockets:(id)a1 IDSDestination:(id)a2 isOriginator:(BOOL)a3 callID:(id)a4 error:(id *)a5;
- (void)registerBlocksForDelegateNotifications;
- (id)validateInitializeConnectionResult:(id)a0;
- (void)deregisterBlocksForDelegateNotifications;
- (void)terminateSession;
- (void)vcMediaStream:(id)a0 updateInputFrequencyLevel:(id)a1;
- (void)vcMediaStream:(id)a0 updateOutputFrequencyLevel:(id)a1;
- (void)didInterruptionBeginHandler;
- (void)didInterruptionEndHandler;
- (id)initWithLocalAddress:(id)a0 error:(id *)a1;
- (id)initWithLocalAddress:(id)a0 callID:(id)a1 error:(id *)a2;
- (id)initWithLocalAddress:(id)a0 isOriginator:(BOOL)a1 error:(id *)a2;
- (id)initWithLocalAddress:(id)a0 isOriginator:(BOOL)a1 callID:(id)a2 error:(id *)a3;
- (id)initWithNetworkSockets:(id)a0 isOriginator:(BOOL)a1 error:(id *)a2;
- (id)initWithIDSDestination:(id)a0 isOriginator:(BOOL)a1 error:(id *)a2;
- (id)initWithIDSDestination:(id)a0 isOriginator:(BOOL)a1 callID:(id)a2 error:(id *)a3;
- (void)startSynchronizeWithStream:(long long)a0;

@end
