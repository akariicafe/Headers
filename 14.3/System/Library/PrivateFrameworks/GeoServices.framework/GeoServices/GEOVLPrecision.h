@interface GEOVLPrecision : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _precisions;
}

@property (readonly, nonatomic) unsigned long long precisionsCount;
@property (readonly, nonatomic) unsigned int *precisions;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearPrecisions;
- (void)addPrecisions:(unsigned int)a0;
- (unsigned int)precisionsAtIndex:(unsigned long long)a0;
- (void)setPrecisions:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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

@end
