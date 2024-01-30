@class NSMutableArray;

@interface ATXPBUserNotificationDerivedData : PBCodable <ATXJSONSerializableProtocol, NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearScores;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)addScores:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)scoresCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)scoresAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
