@class NSMutableArray;

@interface ACHCodableAchievementArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *achievements;

+ (Class)achievementsType;

- (id)achievementsAtIndex:(unsigned long long)a0;
- (void)addAchievements:(id)a0;
- (id)initWithCodableAchievements:(id)a0;
- (unsigned long long)achievementsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAchievements;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
