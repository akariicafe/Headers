@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {
    NSMutableDictionary *_relevanceProviderMap;
    NSDate *_lastDateUpdate;
}

+ (BOOL)_supportsHistoricProviders;
+ (Class)_relevanceProviderClass;
+ (id)_features;

- (id)initWithQueue:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (void).cxx_destruct;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (float)_relevanceForHistoricProvider:(id)a0;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (void)dealloc;
- (void)_prepareForUpdate;
- (void)_addedProvider:(id)a0;
- (void)_removeProvider:(id)a0;
- (void)_handleActionPerformedNotifiction:(id)a0;
- (void)_scheduleUpdatesForActionProvider:(id)a0;

@end
