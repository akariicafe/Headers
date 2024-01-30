@class NSString, NSMutableDictionary, NSData, VCMediaStreamMultiwayConfig, VCMediaStreamRateControlConfig, VCNetworkAddress;

@interface VCMediaStreamConfig : NSObject

@property (nonatomic) long long direction;
@property (retain, nonatomic) VCNetworkAddress *localAddress;
@property (copy, nonatomic) NSString *cName;
@property (retain, nonatomic) VCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned long long recommendedMTU;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (readonly, nonatomic) NSMutableDictionary *txPayloadMap;
@property (readonly, nonatomic) NSMutableDictionary *rxPayloadMap;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
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
@property (retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig;
@property (nonatomic, getter=isLatencySensitiveModeEnabled) BOOL latencySensitiveModeEnabled;
@property (retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithClientDictionary:(id)a0;
- (void)addRxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)addTxPayloadType:(int)a0 networkPayload:(unsigned int)a1;
- (void)setupMediaStreamConfig;
- (void)applyMediaStreamClientDictionary:(id)a0;
- (void)addRxPayloadType:(int)a0;
- (void)addTxPayloadType:(int)a0;

@end
