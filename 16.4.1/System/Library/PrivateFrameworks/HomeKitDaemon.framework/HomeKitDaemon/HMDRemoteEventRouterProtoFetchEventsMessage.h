@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (void)clearTopics;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addTopics:(id)a0;
- (void).cxx_destruct;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;

@end
