@class TRIKVStore, NSMutableDictionary;

@interface TRIExperimentFetchDateManager : NSObject <TRIDateProviding>

@property (readonly, nonatomic) TRIKVStore *keyValueStore;
@property (readonly, nonatomic) NSMutableDictionary *cachedLastFetchExperimentDates;

+ (id)managerWithKeyValueStore:(id)a0;
+ (id)kvstoreKeyForContainer:(int)a0 teamId:(id)a1;

- (void).cxx_destruct;
- (id)initWithKeyValueStore:(id)a0;
- (id)lastFetchExperimentDateForContainer:(int)a0 teamId:(id)a1;
- (void)updateLastFetchExperimentDate:(id)a0 forContainer:(int)a1 teamId:(id)a2;

@end
