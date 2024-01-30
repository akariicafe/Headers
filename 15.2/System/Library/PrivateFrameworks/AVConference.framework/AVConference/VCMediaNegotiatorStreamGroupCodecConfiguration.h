@interface VCMediaNegotiatorStreamGroupCodecConfiguration : NSObject <NSCopying>

@property (nonatomic) long long codecType;
@property (nonatomic) unsigned int rtpPayload;
@property (nonatomic) unsigned long long pTime;
@property (nonatomic) BOOL rtcpRTPFB_GNACKEnabled;
@property (nonatomic) BOOL rtcpPSFB_PLIEnabled;
@property (nonatomic) BOOL rtcpPSFB_FIREnabled;
@property (nonatomic) BOOL rtcpSREnabled;
@property (nonatomic) BOOL H264LevelAsymmetryAllowed;
@property (nonatomic) BOOL H264PacketizationMode;
@property (nonatomic) BOOL useInBandFEC;
@property (nonatomic) unsigned long long profileLevelId;
@property (nonatomic) unsigned long long serializedSize;
@property (nonatomic) unsigned int cipherSuite;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
