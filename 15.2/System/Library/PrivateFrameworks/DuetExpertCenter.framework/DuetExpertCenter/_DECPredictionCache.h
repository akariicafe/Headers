@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DECPredictionCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)clearCacheForCategory:(unsigned long long)a0 consumer:(unsigned long long)a1;
- (void)cachePredictions:(id)a0 consumer:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)predictionsForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1;

@end
