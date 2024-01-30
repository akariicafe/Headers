@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predicates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearPredicates;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)a0;
- (id)predicatesAtIndex:(unsigned long long)a0;

@end
