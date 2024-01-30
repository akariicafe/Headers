@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DECPredictionCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)clearCacheForCategory:(unsigned long long)a0 consumer:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)cachePredictions:(id)a0 consumer:(unsigned long long)a1;
- (id)description;
- (id)predictionsForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1;

@end
