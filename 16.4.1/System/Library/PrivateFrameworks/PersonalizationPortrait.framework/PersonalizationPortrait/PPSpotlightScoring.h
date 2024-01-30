@class PPTopicStore;

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    long long _sandboxExtensionHandle;
}

+ (id)defaultInstance;

- (id)initWithTopicStore:(id)a0;
- (void)dealloc;
- (id)spotlightQueryScore:(id)a0 error:(id *)a1;
- (BOOL)refreshSpotlightScoringCacheWithError:(id *)a0;
- (void).cxx_destruct;

@end
