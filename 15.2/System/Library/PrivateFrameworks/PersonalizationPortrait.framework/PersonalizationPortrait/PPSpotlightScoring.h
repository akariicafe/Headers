@class PPTopicStore;

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    long long _sandboxExtensionHandle;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTopicStore:(id)a0;
- (id)spotlightQueryScore:(id)a0 error:(id *)a1;
- (BOOL)refreshSpotlightScoringCacheWithError:(id *)a0;

@end
