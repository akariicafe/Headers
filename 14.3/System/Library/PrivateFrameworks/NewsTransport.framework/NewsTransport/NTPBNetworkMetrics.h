@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSuccesses:(id)a0;
- (void)addFailures:(id)a0;
- (void)clearSuccesses;
- (unsigned long long)successesCount;
- (id)successesAtIndex:(unsigned long long)a0;
- (void)clearFailures;
- (unsigned long long)failuresCount;
- (id)failuresAtIndex:(unsigned long long)a0;

@end
