@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {
    NSMutableDictionary *_relevanceProviderMap;
    NSDate *_lastDateUpdate;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_supportsHistoricProviders;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)a0;
- (void)_addedProvider:(id)a0;
- (void)_removeProvider:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (void)_handleActionPerformedNotifiction:(id)a0;
- (void)_scheduleUpdatesForActionProvider:(id)a0;

@end
