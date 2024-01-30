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

- (id)initWithInputMode:(id)a0 context:(id)a1 userModelDataStore:(id)a2 durableCounters:(id)a3 settingsDictionary:(id)a4;
- (void).cxx_destruct;
- (void)loadTransientCounter:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (id)getTransientCounterForKey:(id)a0;
- (void)addInteger:(int)a0 toCounterWithKey:(id)a1 andCandidateLength:(int)a2;
- (void)addDouble:(double)a0 toCounterWithKey:(id)a1 andCandidateLength:(int)a2;
- (void)addEntry:(id)a0 toCounter:(id)a1 forDaysPrior:(int)a2;
- (int)indexFromCandidateLength:(int)a0 forCounter:(id)a1;
- (void)addToTransientCounterFromDatabaseEntry:(id)a0 forDaysPrior:(int)a1;
- (id)settingValueFromName:(id)a0;
- (id)countsFromTransientCounterWithName:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (id)aggregatedCountFromTransientCounterWithName:(id)a0 forNumberOfDays:(int)a1 fromLoadedDate:(id)a2;
- (void)persistForDate:(id)a0;

@end
