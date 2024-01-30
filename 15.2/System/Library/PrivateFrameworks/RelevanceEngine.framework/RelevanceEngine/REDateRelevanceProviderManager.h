@class NSDateInterval, NSDate;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {
    NSDate *_lastDateUpdate;
    NSDateInterval *_todayInterval;
}

@property (readonly, nonatomic) NSDate *lastDateUpdate;
@property (readonly, nonatomic) NSDate *todayStart;
@property (readonly, nonatomic) NSDate *todayEnd;

+ (BOOL)_supportsHistoricProviders;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (id)_dependencyClasses;

- (BOOL)_isHistoricProvider:(id)a0;
- (void).cxx_destruct;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (void)_prepareForUpdate;
- (void)_addedProvider:(id)a0;
- (id)_valueForHistoricProvider:(id)a0 feature:(id)a1;
- (void)_scheduleUpdatesForDateProvider:(id)a0;
- (void)_scheduleUpdateForDate:(id)a0;

@end
