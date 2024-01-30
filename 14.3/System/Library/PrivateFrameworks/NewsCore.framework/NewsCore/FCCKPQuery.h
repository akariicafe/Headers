@class NSMutableArray;

@interface FCCKPQuery : PBCodable <NSCopying> {
    struct { unsigned char queryOperator : 1; unsigned char distinct : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) BOOL hasDistinct;
@property (nonatomic) BOOL distinct;
@property (nonatomic) BOOL hasQueryOperator;
@property (nonatomic) int queryOperator;

+ (Class)typesType;
+ (Class)filtersType;
+ (Class)sortsType;

- (void)addFilters:(id)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (unsigned long long)filtersCount;
- (id)typesAtIndex:(unsigned long long)a0;
- (unsigned long long)sortsCount;
- (void)clearFilters;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addSorts:(id)a0;
- (void)addTypes:(id)a0;
- (id)sortsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearSorts;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)typesCount;
- (void)clearTypes;

@end
