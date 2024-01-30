@class ATXIntentMetadataCacheInvalidationMonitor, _ATXDataStore;

@interface ATXIntentMetadataCache : NSObject <ATXIntentMetadataCacheInvalidationDelegate> {
    _ATXDataStore *_dataStore;
    ATXIntentMetadataCacheInvalidationMonitor *_invalidationCriteria;
}

+ (id)sharedInstance;

- (id)initInternal;
- (id)validParameterCombinationsWithSchemaForIntent:(id)a0;
- (void)_setSupportsBackgroundExecution:(BOOL)a0 intent:(id)a1;
- (void).cxx_destruct;
- (void)systemDidUpdate;
- (id)_getCachedSupportsBackgroundExecutionForIntent:(id)a0;
- (id)initWithDataStore:(id)a0 cacheInvalidationCriteria:(id)a1 startMonitoring:(BOOL)a2;
- (id)_getCachedEligibleForWidgetsForIntent:(id)a0;
- (void)setValidParameterCombinationsWithSchema:(id)a0 intent:(id)a1;
- (void)applicationsDidUpdate:(id)a0;
- (BOOL)supportsBackgroundExecutionForIntent:(id)a0;
- (BOOL)isEligibleForWidgetsForIntent:(id)a0;
- (void)_setEligibleForWidgets:(BOOL)a0 intent:(id)a1;
- (void)applicationsDidUninstall:(id)a0;

@end
