@class PBUnknownFields;

@interface GEORPSortParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _sortBy;
    int _sortDirection;
    struct { unsigned char has_sortBy : 1; unsigned char has_sortDirection : 1; } _flags;
}

@property (nonatomic) BOOL hasSortBy;
@property (nonatomic) int sortBy;
@property (nonatomic) BOOL hasSortDirection;
@property (nonatomic) int sortDirection;
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
- (id)sortByAsString:(int)a0;
- (int)StringAsSortBy:(id)a0;
- (id)sortDirectionAsString:(int)a0;
- (int)StringAsSortDirection:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
