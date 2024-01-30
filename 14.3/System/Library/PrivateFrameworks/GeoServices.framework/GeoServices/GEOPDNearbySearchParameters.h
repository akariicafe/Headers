@class GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDNearbySearchParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _maxResults;
    int _sortOrder;
    struct { unsigned char has_maxResults : 1; unsigned char has_sortOrder : 1; } _flags;
}

@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)sortOrderAsString:(int)a0;
- (int)StringAsSortOrder:(id)a0;

@end
