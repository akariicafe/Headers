@interface GEONearbyTransitGroup : PBCodable <NSCopying> {
    unsigned int _linesShown;
    unsigned int _lines;
    struct { unsigned char has_linesShown : 1; unsigned char has_lines : 1; } _flags;
}

@property (nonatomic) BOOL hasLines;
@property (nonatomic) unsigned int lines;
@property (nonatomic) BOOL hasLinesShown;
@property (nonatomic) unsigned int linesShown;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
