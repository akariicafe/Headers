@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _scores;
}

@property (readonly, nonatomic) unsigned long long scoresCount;
@property (readonly, nonatomic) long long *scores;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearScores;
- (void)addScores:(long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (long long)scoresAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)setScores:(long long *)a0 count:(unsigned long long)a1;

@end
