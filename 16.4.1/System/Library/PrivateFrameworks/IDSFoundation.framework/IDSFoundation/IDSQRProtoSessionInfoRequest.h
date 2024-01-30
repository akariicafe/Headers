@class NSMutableArray;

@interface IDSQRProtoSessionInfoRequest : PBRequest <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _publishedStreamIds;
    struct { unsigned char generationCounter : 1; unsigned char linkId : 1; unsigned char maxConcurrentStreams : 1; unsigned char requestId : 1; unsigned char allWildcardSubscription : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL allWildcardSubscription;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) unsigned int requestId;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)subscribedStreamsType;

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
- (void).cxx_destruct;
- (void)addPublishedStreamIds:(unsigned int)a0;
- (void)addSubscribedStreams:(id)a0;
- (void)clearPublishedStreamIds;
- (void)clearSubscribedStreams;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)a0;
- (void)setPublishedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)subscribedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedStreamsCount;

@end
