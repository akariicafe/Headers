@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearScores;
- (void)addScores:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)scoresCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)scoresAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
