@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)failuresType;
+ (Class)successesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addFailures:(id)a0;
- (void)addSuccesses:(id)a0;
- (void)clearFailures;
- (void)clearSuccesses;
- (id)failuresAtIndex:(unsigned long long)a0;
- (unsigned long long)failuresCount;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
