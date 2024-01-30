@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray *allEvents;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (void)addEventDict:(id)a0 toTable:(id)a1;
- (void)clearAllData;
- (id)summaryCounts;
- (void)dealloc;
- (BOOL)tryToOpenDatabase;
- (long long)successCount;
- (void)incrementSuccessCount;
- (void)incrementWrapFailureCount;
- (long long)wrapFailureCount;

@end
