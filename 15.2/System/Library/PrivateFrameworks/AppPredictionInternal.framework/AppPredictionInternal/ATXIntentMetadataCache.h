@class ATXIntentMetadataCacheInvalidationMonitor, _ATXDataStore;

@interface ATXIntentMetadataCache : NSObject <ATXIntentMetadataCacheInvalidationDelegate> {
    _ATXDataStore *_dataStore;
    ATXIntentMetadataCacheInvalidationMonitor *_invalidationCriteria;
}

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (id)_getCachedEligibleForWidgetsForIntent:(id)a0;
- (id)subtitleForIntent:(id)a0 localeIdentifier:(id)a1;
- (id)_getCachedSubtitleForCacheKey:(id)a0;
- (void)_setTitle:(id)a0 cacheKey:(id)a1;
- (id)validParameterCombinationsWithSchemaForIntent:(id)a0;
- (BOOL)supportsBackgroundExecutionForIntent:(id)a0;
- (id)_getCachedTitleForCacheKey:(id)a0;
- (void)_setSupportsBackgroundExecution:(BOOL)a0 intent:(id)a1;
- (id)initInternal;
- (void)_setEligibleForWidgets:(BOOL)a0 intent:(id)a1;
- (void)systemDidUpdate;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0 cacheInvalidationCriteria:(id)a1 startMonitoring:(BOOL)a2;
- (id)titleForIntent:(id)a0 localeIdentifier:(id)a1;
- (void)_setSubtitle:(id)a0 cacheKey:(id)a1;
- (id)_getCachedSupportsBackgroundExecutionForIntent:(id)a0;
- (BOOL)isEligibleForWidgetsForIntent:(id)a0;
- (void)setValidParameterCombinationsWithSchema:(id)a0 intent:(id)a1;
- (void)applicationsDidUpdate:(id)a0;

@end
