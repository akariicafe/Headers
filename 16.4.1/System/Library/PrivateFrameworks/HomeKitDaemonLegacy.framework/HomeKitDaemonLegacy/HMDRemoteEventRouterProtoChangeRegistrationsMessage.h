@class NSMutableArray;

@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals;
@property (retain, nonatomic) NSMutableArray *topicAdditions;
@property (retain, nonatomic) NSMutableArray *topicRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;
+ (Class)topicAdditionsType;
+ (Class)topicRemovalsType;

- (void)addTopicFilterRemovals:(id)a0;
- (unsigned long long)topicFilterRemovalsCount;
- (void)addTopicFilterAdditions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearTopicFilterRemovals;
- (void).cxx_destruct;
- (void)clearTopicFilterAdditions;
- (unsigned long long)topicFilterAdditionsCount;
- (void)addTopicAdditions:(id)a0;
- (void)addTopicRemovals:(id)a0;
- (void)clearTopicAdditions;
- (void)clearTopicRemovals;
- (id)topicAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicAdditionsCount;
- (id)topicRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicRemovalsCount;

@end
