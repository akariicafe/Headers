@class NSCache, NSMutableDictionary, NSString;
@protocol EDMailboxPredictor;

@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor>

@property (retain, nonatomic) id<EDMailboxPredictor> predictor;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *cacheKeysByProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_cacheKeyForMessages:(id)a0;
- (id)_propertyKeysForMessage:(id)a0;
- (void)_trackCacheKey:(id)a0 forPropertyKey:(id)a1;
- (id)initWithPredictor:(id)a0;
- (void)invalidatePredictionsAffectedByMessage:(id)a0;
- (id)predictMailboxIDsForMessages:(id)a0 limit:(unsigned long long)a1 diagnostics:(id *)a2;
- (void)removeAllPredictions;

@end
