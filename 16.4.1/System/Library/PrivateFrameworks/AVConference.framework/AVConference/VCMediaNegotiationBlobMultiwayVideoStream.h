@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable <NSCopying> {
    struct { unsigned char maxMediaBitrate : 1; unsigned char maxNetworkBitrate : 1; unsigned char maxPacketsPerSecond : 1; unsigned char metadata : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char repairedStreamID : 1; } _has;
}

@property (readonly, nonatomic) BOOL isSubStream;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int payload;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int supportedVideoFormats;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

+ (BOOL)convertVideoFormat:(int)a0 width:(int *)a1 height:(int *)a2;
+ (int)payloadForVideoPayload:(int)a0;
+ (int)videoFormatForWidth:(int)a0 height:(int)a1;
+ (int)videoPayloadForPayload:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithStreamConfig:(id)a0;
- (id)newMultiwayVideoStream;
- (void)printWithLogFile:(void *)a0;

@end
