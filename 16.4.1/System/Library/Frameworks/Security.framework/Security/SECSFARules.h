@class NSMutableArray;

@interface SECSFARules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rules;

+ (Class)rulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addRules:(id)a0;
- (void)clearRules;
- (id)rulesAtIndex:(unsigned long long)a0;
- (unsigned long long)rulesCount;

@end
