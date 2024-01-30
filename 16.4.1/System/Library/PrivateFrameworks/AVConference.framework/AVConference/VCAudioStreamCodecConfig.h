@class NSMutableArray;

@interface VCAudioStreamCodecConfig : NSObject

@property (readonly, nonatomic) long long codecType;
@property (nonatomic, getter=isOctetAligned) BOOL octetAligned;
@property (nonatomic, getter=isDTXEnabled) BOOL dtxEnabled;
@property (nonatomic) int preferredMode;
@property (retain, nonatomic) NSMutableArray *supportedModes;
@property (retain, nonatomic) NSMutableArray *supportedBandwidths;
@property (readonly, nonatomic) BOOL isComfortNoise;
@property (nonatomic, getter=isDTMF) BOOL dtmf;
@property (nonatomic) unsigned int networkPayload;
@property (nonatomic) unsigned short evsChannelAwareOffset;
@property (nonatomic) BOOL evsHeaderFullOnly;
@property (nonatomic) unsigned long long pTime;
@property (nonatomic) BOOL isOpusInBandFecEnabled;

- (void)dealloc;
- (void)setPreferredModeWithClientMode:(int)a0;
- (id)initWithCodecType:(long long)a0;
- (void)setupAMRModesWithClientModeMask:(unsigned int)a0;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)a0;
- (void)setupCodecBandwidthsWithClientBandwidthMask:(unsigned int)a0;
- (void)setupEVSModesWithClientModeMask:(unsigned int)a0;
- (void)setupModesWithClientModeMask:(unsigned int)a0;

@end
