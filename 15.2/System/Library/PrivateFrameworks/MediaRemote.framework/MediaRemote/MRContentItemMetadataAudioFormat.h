@class _MRAudioFormatProtobuf, NSString, NSDictionary;

@interface MRContentItemMetadataAudioFormat : NSObject <NSCopying>

@property (readonly, nonatomic) _MRAudioFormatProtobuf *protobuf;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *stableVariantID;
@property (readonly, nonatomic) BOOL hasTier;
@property (readonly, nonatomic) BOOL hasBitrate;
@property (readonly, nonatomic) BOOL hasSampleRate;
@property (readonly, nonatomic) BOOL hasBitDepth;
@property (readonly, nonatomic) BOOL hasCodec;
@property (readonly, nonatomic) BOOL hasSpatialized;
@property (readonly, nonatomic) BOOL hasMultiChannel;
@property (readonly, nonatomic) BOOL hasChannelLayout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
