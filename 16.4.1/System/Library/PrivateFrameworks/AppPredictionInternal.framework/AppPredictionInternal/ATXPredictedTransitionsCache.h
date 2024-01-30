@class NSMutableDictionary;
@protocol ATXPredictedLocationsManagerProtocol;

@interface ATXPredictedTransitionsCache : NSObject {
    id<ATXPredictedLocationsManagerProtocol> _manager;
    NSMutableDictionary *_homeToWork;
    NSMutableDictionary *_workToHome;
}

+ (id)ceilingDateToNextHour:(id)a0;
+ (id)getNextTransitionInCache:(id)a0 fromDate:(id)a1;
+ (void)removeEntriesFromCache:(id)a0 beforeDate:(id)a1;

- (void)dump;
- (id)initWithLocationManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)cacheForDestinationLoiType:(long long)a0;
- (BOOL)cacheHeadingFromLoiType:(long long)a0 toLoiType:(long long)a1 forDate:(id)a2;
- (void)fetchEntriesStartingDate:(id)a0 onActivity:(id)a1;
- (id)getNextHomeToWorkTransitionsOnActivity:(id)a0;
- (id)getNextWorkToHomeTransitionsOnActivity:(id)a0;
- (void)prewarmOnActivity:(id)a0;
- (void)pruneStaleEntries;

@end
