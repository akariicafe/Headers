@class NSString, NSDictionary, NSMutableDictionary, TIAnalyticsMetricsContext;
@protocol TIUserModelDataStoring;

@interface TIUserModelValues : NSObject {
    NSMutableDictionary *_transientCounters;
}

@property (readonly, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) TIAnalyticsMetricsContext *context;
@property (readonly, nonatomic) id<TIUserModelDataStoring> userModelDataStore;
@property (readonly, nonatomic) NSDictionary *durableCounters;
@property (readonly, nonatomic) NSDictionary *settingsDictionary;

- (void).cxx_destruct;
- (void)persistForDate:(id)a0;
- (void)addDouble:(double)a0 toCounterWithKey:(id)a1 andCandidateLength:(int)a2;
- (void)addEntry:(id)a0 toCounter:(id)a1 forDaysPrior:(int)a2;
- (void)addInteger:(int)a0 toCounterWithKey:(id)a1 andCandidateLength:(int)a2;
- (void)addToTransientCounterFromDatabaseEntry:(id)a0 withWeeklyMetricKeys:(id)a1 fromLoadedDate:(id)a2;
- (id)aggregatedCountFromTransientCounterWithName:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (id)countsFromTransientCounterWithName:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (void)extendCountersForWeeklyMetricKeys:(id)a0;
- (id)getTransientCounterForKey:(id)a0;
- (int)indexFromCandidateLength:(int)a0 forCounter:(id)a1;
- (id)initWithInputMode:(id)a0 context:(id)a1 userModelDataStore:(id)a2 durableCounters:(id)a3 settingsDictionary:(id)a4;
- (void)loadTransientCounter:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (id)settingValueFromName:(id)a0;

@end
