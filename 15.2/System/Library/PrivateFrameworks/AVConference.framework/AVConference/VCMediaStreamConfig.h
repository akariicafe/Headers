@class VCNetworkFeedbackController, NSString, NSMutableDictionary, NSData, VCMediaStreamMultiwayConfig, VCMediaStreamRateControlConfig, VCNetworkAddress;

@interface VCMediaStreamConfig : NSObject {
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
}

@property (nonatomic) long long direction;
@property (retain, nonatomic) VCNetworkAddress *localAddress;
@property (copy, nonatomic) NSString *cName;
@property (retain, nonatomic) VCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) struct tagVCJBTargetEstimatorSynchronizer { } *jbTargetEstimatorSynchronizer;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (retain, nonatomic) NSData *receiveMediaKey;
@property (readonly, nonatomic) NSMutableDictionary *txPayloadMap;
@property (readonly, nonatomic) NSMutableDictionary *rxPayloadMap;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) unsigned int rtpTimestampRate;
@property (nonatomic, getter=isDecryptionTimeOutEnabled) BOOL decryptionTimeOutEnabled;
@property (nonatomic) double decryptionTimeOutInterval;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic) long long SRTCPCipherSuite;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPReceiveCallbackEnabled) BOOL rtcpReceiveCallbackEnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (readonly, nonatomic) long long primaryTxCodecType;
@property (nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled;
@property (nonatomic) struct tagVCSecurityKeyHolder { } *securityKeyHolder;
@property (nonatomic) int sframeCipherSuite;
@property (retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig;
@property (nonatomic) int captureSource;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (nonatomic, getter=isLatencySensitiveModeEnabled) BOOL latencySensitiveModeEnabled;
@property (retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithClientDictionary:(id)a0;
- (void)addRxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)addTxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)setupMediaStreamConfig;
- (void)applyMediaStreamClientDictionary:(id)a0;
- (void)addRxPayloadType:(int)a0;
- (void)addTxPayloadType:(int)a0;

@end
