@interface GEOPDRigMetrics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _occlusionScores;
}

@property (readonly, nonatomic) unsigned long long occlusionScoresCount;
@property (readonly, nonatomic) unsigned int *occlusionScores;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned int)occlusionScoreAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)setOcclusionScores:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (void)addOcclusionScore:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearOcclusionScores;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
