@class NSString;

@interface _MRAudioFormatProtobuf : PBCodable <NSCopying> {
    struct { unsigned char bitDepth : 1; unsigned char bitrate : 1; unsigned char sampleRate : 1; unsigned char channelLayout : 1; unsigned char codec : 1; unsigned char tier : 1; unsigned char multiChannel : 1; unsigned char spatialized : 1; } _has;
}

@property (nonatomic) BOOL hasTier;
@property (nonatomic) int tier;
@property (nonatomic) BOOL hasBitrate;
@property (nonatomic) long long bitrate;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) BOOL hasBitDepth;
@property (nonatomic) long long bitDepth;
@property (nonatomic) BOOL hasCodec;
@property (nonatomic) unsigned int codec;
@property (nonatomic) BOOL hasSpatialized;
@property (nonatomic) BOOL spatialized;
@property (nonatomic) BOOL hasMultiChannel;
@property (nonatomic) BOOL multiChannel;
@property (nonatomic) BOOL hasChannelLayout;
@property (nonatomic) unsigned int channelLayout;
@property (readonly, nonatomic) BOOL hasAudioChannelLayoutDescription;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL hasStableVariantID;
@property (retain, nonatomic) NSString *stableVariantID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsTier:(id)a0;
- (id)tierAsString:(int)a0;

@end
