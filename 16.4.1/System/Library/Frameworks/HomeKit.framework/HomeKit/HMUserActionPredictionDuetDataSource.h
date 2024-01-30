@class NSArray, NSString, HMCacheManager;
@protocol HMUserActionSuggestionProvider, HMCache;

@interface HMUserActionPredictionDuetDataSource : NSObject <HMFLogging> {
    HMCacheManager *_cacheManager;
    id<HMUserActionSuggestionProvider> _suggestionProvider;
    NSArray *_lastFetchedPredictions;
    id<HMCache> _predictionCache;
}

@property (readonly, copy) NSArray *predictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)fetchPredictionsFromCache;
- (id)fetchPredictionsFromDuet;
- (id)initWithCacheManager:(id)a0;
- (id)initWithCacheManager:(id)a0 suggestionProvider:(id)a1;

@end
