@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *aggregates;
@property (retain, nonatomic) NSMutableArray *histories;

+ (Class)aggregatesType;
+ (Class)historiesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addAggregates:(id)a0;
- (void)addHistories:(id)a0;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearHistories;
- (unsigned long long)historiesCount;
- (id)historiesAtIndex:(unsigned long long)a0;

@end
