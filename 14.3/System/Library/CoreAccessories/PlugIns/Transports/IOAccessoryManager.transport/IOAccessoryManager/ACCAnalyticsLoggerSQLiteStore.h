@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray *allEvents;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (void)dealloc;
- (void)clearAllData;
- (BOOL)tryToOpenDatabase;
- (long long)successCount;
- (void)addEventDict:(id)a0 toTable:(id)a1;
- (id)summaryCounts;
- (void)incrementSuccessCount;
- (void)incrementWrapFailureCount;
- (long long)wrapFailureCount;

@end
