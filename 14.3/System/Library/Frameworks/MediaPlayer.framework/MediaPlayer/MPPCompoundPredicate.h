@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predicates;

- (void)clearPredicates;
- (void)addPredicates:(id)a0;
- (id)predicatesAtIndex:(unsigned long long)a0;
- (unsigned long long)predicatesCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
