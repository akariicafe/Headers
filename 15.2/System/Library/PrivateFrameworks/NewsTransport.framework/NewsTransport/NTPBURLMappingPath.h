@class NSString, NSMutableArray;

@interface NTPBURLMappingPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)topicTagsType;
+ (Class)channelTagsType;
+ (Class)sectionTagsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTopicTags:(id)a0;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)clearTopicTags;
- (unsigned long long)topicTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (void)clearChannelTags;
- (unsigned long long)channelTagsCount;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (void)clearSectionTags;
- (unsigned long long)sectionTagsCount;
- (id)sectionTagsAtIndex:(unsigned long long)a0;

@end
