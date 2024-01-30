@interface GEOCoarseLocationTessellationOptions : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _zoomLevels;
    int _type;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long zoomLevelsCount;
@property (readonly, nonatomic) unsigned int *zoomLevels;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addZoomLevels:(unsigned int)a0;
- (void)clearZoomLevels;
- (void)setZoomLevels:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)typeAsString:(int)a0;
- (unsigned int)zoomLevelsAtIndex:(unsigned long long)a0;

@end
