@interface FedStatsGeoHashType : FedStatsBoundedULongType

@property (nonatomic) unsigned long long hashLength;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;
+ (unsigned long long)geoHashCharToInteger:(char)a0;

- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)initWithGeoHashLength:(unsigned long long)a0;

@end
