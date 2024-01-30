@class NSMutableDictionary;
@protocol ATXPredictedLocationsManagerProtocol;

@interface ATXPredictedTransitionsCache : NSObject {
    id<ATXPredictedLocationsManagerProtocol> _manager;
    NSMutableDictionary *_homeToWork;
    NSMutableDictionary *_workToHome;
}

+ (id)getNextTransitionInCache:(id)a0 fromDate:(id)a1;
+ (id)ceilingDateToNextHour:(id)a0;
+ (void)removeEntriesFromCache:(id)a0 beforeDate:(id)a1;

- (void)dump;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocationManager:(id)a0;
- (void)prewarmOnActivity:(id)a0;
- (void)fetchEntriesStartingDate:(id)a0 onActivity:(id)a1;
- (void)pruneStaleEntries;
- (BOOL)cacheHeadingFromLoiType:(long long)a0 toLoiType:(long long)a1 forDate:(id)a2;
- (id)cacheForDestinationLoiType:(long long)a0;
- (id)getNextHomeToWorkTransitionsOnActivity:(id)a0;
- (id)getNextWorkToHomeTransitionsOnActivity:(id)a0;

@end
