@class PBUnknownFields;

@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _resultSubtype;
    int _resultType;
    int _sortPriority;
    struct { unsigned char has_resultSubtype : 1; unsigned char has_resultType : 1; unsigned char has_sortPriority : 1; } _flags;
}

@property (nonatomic) BOOL hasSortPriority;
@property (nonatomic) int sortPriority;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasResultSubtype;
@property (nonatomic) int resultSubtype;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (int)StringAsResultType:(id)a0;
- (void).cxx_destruct;
- (id)resultTypeAsString:(int)a0;
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
- (id)resultSubtypeAsString:(int)a0;
- (int)StringAsResultSubtype:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
