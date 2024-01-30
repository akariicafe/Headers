@class SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances, SAGuidanceGuideUpdate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AFUIGuideCacheManager : NSObject {
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    BOOL _isCheckingGuideUpdate;
}

@property (readonly, nonatomic) NSNumber *cachedGuideTag;
@property (readonly, nonatomic) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (readonly, nonatomic) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkGuideUpdate;
- (BOOL)shouldCheckForUpdateWithLastAppUpdateTime:(id)a0;
- (id)_aceObjectDictionaryAtFilepath:(id)a0;
- (id)_cachedGuideUpdate;
- (void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)a0;
- (void)_clearCachedGuide;
- (id)_pathForCachedGuideUpdate;
- (BOOL)_shouldCheckForUpdateAtDate:(id)a0 lastAppUpdateTime:(id)a1;
- (void)_updateLastCheckedWithDate:(id)a0;
- (void)updateCacheWithGuideUpdate:(id)a0 completion:(id /* block */)a1;
- (void)updateLastCheckedDate;

@end
