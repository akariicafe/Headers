@class NSMutableSet, NSMutableArray;

@interface VCMediaNegotiatorStreamGroupStreamConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned char streamIndex;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSMutableSet *payloads;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) unsigned int rtpTimestampRate;
@property (nonatomic) unsigned short parentStreamID;
@property (readonly, nonatomic) NSMutableArray *codecs;
@property (nonatomic) BOOL isTemporalStream;
@property (nonatomic) BOOL isSubStream;
@property (nonatomic) unsigned int audioChannelCount;
@property (nonatomic) unsigned long long serializedSize;
@property (nonatomic) unsigned int coordinateSystem;

+ (id)configWithQualityIndex:(unsigned int)a0 nwBitrate:(unsigned int)a1 mediaBitrate:(unsigned int)a2 maxPacketsPerSecond:(unsigned int)a3 repairedNwBitrate:(unsigned int)a4 keyFrameInterval:(unsigned int)a5 framerate:(unsigned int)a6 rtpSampleRate:(unsigned int)a7 isTemporal:(BOOL)a8 isSubStream:(BOOL)a9 metadata:(unsigned int)a10 payloads:(id)a11 codecs:(id)a12 width:(unsigned int)a13 height:(unsigned int)a14 audioChannelCount:(unsigned int)a15 streamIndex:(unsigned char)a16 coordinateSystem:(unsigned int)a17;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPayload:(int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addCodec:(unsigned int)a0;
- (BOOL)applyCipherSuiteOnMediaStreamConfig:(id)a0 codecConfigs:(id)a1;
- (BOOL)areCodecsEqualTo:(id)a0;
- (BOOL)isEqualPayloads:(id)a0;
- (void)removeCodec:(unsigned int)a0;
- (void)resetCodecs;
- (void)resetPayloads;

@end
