@class NSMutableArray, PBUnknownFields;

@interface GEOPDPublisherSuggestionResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_publisherIds;
}

@property (retain, nonatomic) NSMutableArray *publisherIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)publisherIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPublisherId:(id)a0;
- (unsigned long long)publisherIdsCount;
- (void)clearPublisherIds;
- (id)publisherIdAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
