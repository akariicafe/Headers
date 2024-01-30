@class NSDictionary;

@interface _DECPredictionCacheResult : NSObject

@property (readonly, nonatomic) unsigned long long hits;
@property (readonly, nonatomic) unsigned long long misses;
@property (readonly, nonatomic) NSDictionary *predictions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPredictions:(id)a0 hits:(unsigned long long)a1 misses:(unsigned long long)a2;

@end
