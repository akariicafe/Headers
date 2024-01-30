@class NSString, AVCNetworkAddress, NSData, AVCVideoStreamConfig, AVCAudioStreamConfig, AVCTextStreamConfig;

@interface AVCMediaStreamConfig : NSObject {
    BOOL _jitterBufferModeSet;
}

@property (retain, nonatomic) AVCNetworkAddress *localAddress;
@property (retain, nonatomic) AVCNetworkAddress *remoteAddress;
@property (copy, nonatomic) NSString *cName;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long txPayloadType;
@property (nonatomic) unsigned long long rxPayloadType;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTCPXREnabled) BOOL rtcpXREnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) unsigned long long recommendedMTU;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *receiveMediaKey;
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic) long long SRTCPCipherSuite;
@property (retain, nonatomic) AVCAudioStreamConfig *audio;
@property (retain, nonatomic) AVCVideoStreamConfig *video;
@property (retain, nonatomic) AVCTextStreamConfig *text;
@property (nonatomic) long long streamInputID;
@property (nonatomic) unsigned long long networkClockID;
@property (nonatomic) unsigned int jitterBufferMode;
@property (nonatomic) unsigned long long fixedJitterBufferSize;
@property (nonatomic) long long accessNetworkType;

+ (long long)cipherSuiteWithClientCipherSuite:(long long)a0;
+ (long long)clientCipherSuiteWithCipherSuite:(long long)a0;
+ (long long)clientStreamDirectionWithDirection:(long long)a0;
+ (id)dictionaryForCommonStreamConfig:(id)a0;
+ (long long)streamDirectionWithClientDirection:(long long)a0;

- (id)dictionary;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)isValidAudioConfig;
- (BOOL)isValidTextConfig;
- (BOOL)isAudioCodecMaskValid;
- (BOOL)isAudioCodecValid;
- (BOOL)isJitterBufferModeValid;
- (BOOL)isStreamInputIDValid;
- (BOOL)isValidVideoConfig;
- (void)setUpWithDictionary:(id)a0;

@end
