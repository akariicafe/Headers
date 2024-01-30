@class NSString, NSDate;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {
    NSDate *_lastDateUpdate;
}

@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsHistoricProviders;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (BOOL)_isHistoricProvider:(id)a0;
- (float)_relevanceForProvider:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (float)_relevanceForHistoricProvider:(id)a0;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (void)_prepareForUpdate;
- (void)_addedProvider:(id)a0;
- (void)_scheduleUpdatesForSessionProvider:(id)a0;

@end
