@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pasts;
@property (retain, nonatomic) NSMutableArray *futures;

+ (Class)pastType;
+ (Class)futureType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addPast:(id)a0;
- (void)addFuture:(id)a0;
- (unsigned long long)pastsCount;
- (void)clearPasts;
- (id)pastAtIndex:(unsigned long long)a0;
- (unsigned long long)futuresCount;
- (void)clearFutures;
- (id)futureAtIndex:(unsigned long long)a0;

@end
