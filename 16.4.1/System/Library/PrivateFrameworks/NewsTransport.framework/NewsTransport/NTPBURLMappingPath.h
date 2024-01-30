@class NSString, NSMutableArray;

@interface NTPBURLMappingPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)sectionTagsType;
+ (Class)channelTagsType;
+ (Class)topicTagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)addTopicTags:(id)a0;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelTagsCount;
- (void)clearChannelTags;
- (void)clearSectionTags;
- (void)clearTopicTags;
- (id)sectionTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicTagsCount;

@end
