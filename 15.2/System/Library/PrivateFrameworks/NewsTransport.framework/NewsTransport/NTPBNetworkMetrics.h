@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
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
