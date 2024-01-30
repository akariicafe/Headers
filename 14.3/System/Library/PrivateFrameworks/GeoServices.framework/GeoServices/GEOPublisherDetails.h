@interface GEOPublisherDetails : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _publisherIds;
    BOOL _currentlyFollowing;
    struct { unsigned char has_currentlyFollowing : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long publisherIdsCount;
@property (readonly, nonatomic) unsigned long long *publisherIds;
@property (nonatomic) BOOL hasCurrentlyFollowing;
@property (nonatomic) BOOL currentlyFollowing;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)setPublisherIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPublisherId:(unsigned long long)a0;
- (void)clearPublisherIds;
- (unsigned long long)publisherIdAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
