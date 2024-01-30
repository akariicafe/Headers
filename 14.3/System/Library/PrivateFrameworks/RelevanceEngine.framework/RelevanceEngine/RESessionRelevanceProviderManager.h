@class NSString, NSDate;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties> {
    NSDate *_lastDateUpdate;
}

@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (BOOL)_supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)pause;
- (void)resume;
- (float)_relevanceForProvider:(id)a0;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)a0;
- (void)_addedProvider:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (void)_scheduleUpdatesForSessionProvider:(id)a0;

@end
