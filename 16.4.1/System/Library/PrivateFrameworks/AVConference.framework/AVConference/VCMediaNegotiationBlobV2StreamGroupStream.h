@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupStream : PBCodable <NSCopying> {
    struct { unsigned char audioChannelCount : 1; unsigned char coordinateSystem : 1; unsigned char maxNetworkBitrate : 1; unsigned char metadata : 1; unsigned char payloadSpecOrPayloads : 1; unsigned char qualityIndex : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char rtpSSRC : 1; unsigned char streamID : 1; unsigned char streamIndex : 1; } _has;
}

@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) BOOL hasPayloadSpecOrPayloads;
@property (nonatomic) unsigned int payloadSpecOrPayloads;
@property (nonatomic) BOOL hasQualityIndex;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) BOOL hasStreamID;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) BOOL hasAudioChannelCount;
@property (nonatomic) unsigned int audioChannelCount;
@property (nonatomic) BOOL hasStreamIndex;
@property (nonatomic) unsigned int streamIndex;
@property (readonly, nonatomic) BOOL hasRequiredPackedPayload;
@property (retain, nonatomic) NSData *requiredPackedPayload;
@property (readonly, nonatomic) BOOL hasOptionalPackedPayload;
@property (retain, nonatomic) NSData *optionalPackedPayload;
@property (nonatomic) BOOL hasCoordinateSystem;
@property (nonatomic) unsigned int coordinateSystem;

+ (void)appendMetadata:(unsigned int)a0 toString:(id)a1;
+ (void)appendPayloadsSpecsToString:(id)a0 streamConfig:(id)a1;
+ (void)appendPayloadsToString:(id)a0 streamConfig:(id)a1;
+ (id)defaultsForStreamGroupID:(unsigned int)a0 streamIndex:(unsigned char)a1;
+ (BOOL)isDefaultPayloadConfigsWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2;
+ (BOOL)isFallbackStreamWithStreamGroupID:(unsigned int)a0 streamConfig:(id)a1;
+ (unsigned int)metadataWithStreamConfig:(id)a0;
+ (unsigned int)payloadFlagWithPayload:(int)a0;
+ (BOOL)payloadSpecWithStreamConfig:(id)a0 payloadConfigs:(id)a1 payloadSpecs:(unsigned int *)a2;
+ (int)payloadsWithPayloadBit:(int)a0;
+ (BOOL)payloadsWithStreamConfig:(id)a0 payloadBitmap:(unsigned int *)a1;
+ (void)printWithLogFile:(void *)a0 prefix:(id)a1 streamConfig:(id)a2;
+ (BOOL)qualityIndex:(unsigned int *)a0 isFallbackStream:(BOOL *)a1 forStreamGroupID:(unsigned int)a2 streamIndex:(unsigned char)a3;
+ (BOOL)streamIndex:(char *)a0 forStreamGroupID:(unsigned int)a1 qualityIndex:(unsigned int)a2 isFallbackStream:(BOOL)a3;
+ (void)updateStreamConfig:(id)a0 withMetadata:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)actualAudioChannelCountWithDefaultConfig:(id)a0;
- (unsigned int)actualMaxNetworkBitrateWithDefaultConfig:(id)a0;
- (unsigned int)actualMaxRepairedNetworkBitrateWithDefaultConfig:(id)a0;
- (unsigned int)actualMetadataWithDefaultConfig:(id)a0;
- (unsigned int)actualQualityIndexWithDefaultConfig:(id)a0;
- (unsigned int)actualStreamIndex;
- (id)compressWithConfig:(id)a0;
- (id)dataRequiredPacketPayload;
- (BOOL)initSSRC:(id)a0;
- (id)initWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2;
- (id)initWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2 defaultConfig:(id)a3;
- (unsigned int)mediaStreamGroupCoordinateSystem;
- (id)optionalPackedPayloaWithDefaultConfig:(id)a0;
- (id)optionalPayloadCompressWithConfig:(id)a0;
- (BOOL)readOptionalPacketPayload:(struct tagStreamGroupStreamOptionalPackedPayload { unsigned short x0; unsigned short x1; unsigned char x2; } *)a0;
- (BOOL)readRequiredPacketPayloadWithStreamConfig:(id)a0;
- (id)requiredPayloadCompressWithConfig:(id)a0;
- (BOOL)setNegotiatedCoordinateSystemFromCoordinateSystem:(unsigned int)a0;
- (id)streamConfigWithPayloadConfigs:(id)a0 payloadConfigSampleRates:(id)a1 streamGroupID:(unsigned int)a2;
- (BOOL)updatePayloadSpecsForConfig:(id)a0 defaultConfig:(id)a1;
- (BOOL)updatePayloadSpecsForConfig:(id)a0 defaultConfig:(id)a1 payloadConfigs:(id)a2;
- (void)usePayloadSpecWithGroupID:(unsigned int)a0 qualityIndexForPayloadSpecIndex:(id)a1 defaultPayloadSpecsForQualityIndex:(id)a2;
- (BOOL)usesPayloadConfigsWithGroupID:(unsigned int)a0;

@end
