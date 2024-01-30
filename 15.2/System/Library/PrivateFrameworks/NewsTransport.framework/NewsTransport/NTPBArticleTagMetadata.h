@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTopicTagMetadata:(id)a0;
- (unsigned long long)topicTagMetadatasCount;
- (void)clearTopicTagMetadatas;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;

@end
