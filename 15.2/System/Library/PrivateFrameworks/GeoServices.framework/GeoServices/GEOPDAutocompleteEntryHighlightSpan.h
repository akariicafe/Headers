@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _length;
    unsigned int _startIndex;
    struct { unsigned char has_length : 1; unsigned char has_startIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned int length;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
