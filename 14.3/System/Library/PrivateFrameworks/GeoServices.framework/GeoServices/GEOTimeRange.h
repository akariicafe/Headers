@class PBUnknownFields;

@interface GEOTimeRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _from;
    unsigned int _to;
    struct { unsigned char has_from : 1; unsigned char has_to : 1; } _flags;
}

@property (nonatomic) BOOL hasFrom;
@property (nonatomic) unsigned int from;
@property (nonatomic) BOOL hasTo;
@property (nonatomic) unsigned int to;
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
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0;

@end
