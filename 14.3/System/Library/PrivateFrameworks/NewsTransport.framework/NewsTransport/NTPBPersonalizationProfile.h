@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *aggregates;
@property (retain, nonatomic) NSMutableArray *histories;

+ (Class)historiesType;
+ (Class)aggregatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addAggregates:(id)a0;
- (void)addHistories:(id)a0;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearHistories;
- (unsigned long long)historiesCount;
- (id)historiesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
