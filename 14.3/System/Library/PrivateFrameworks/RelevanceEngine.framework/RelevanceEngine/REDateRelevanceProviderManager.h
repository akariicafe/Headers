@class NSDateInterval, NSDate;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {
    NSDate *_lastDateUpdate;
    NSDateInterval *_todayInterval;
}

@property (readonly, nonatomic) NSDate *lastDateUpdate;
@property (readonly, nonatomic) NSDate *todayStart;
@property (readonly, nonatomic) NSDate *todayEnd;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (BOOL)_supportsHistoricProviders;
+ (id)_dependencyClasses;

- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)_prepareForUpdate;
- (void)_addedProvider:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;
- (id)_valueForHistoricProvider:(id)a0 feature:(id)a1;
- (void)_scheduleUpdatesForDateProvider:(id)a0;
- (void)_scheduleUpdateForDate:(id)a0;

@end
