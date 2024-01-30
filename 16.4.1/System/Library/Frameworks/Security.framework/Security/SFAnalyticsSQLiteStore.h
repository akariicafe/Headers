@class NSArray, NSString, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *hardFailures;
@property (readonly) NSArray *softFailures;
@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *samples;
@property (retain) NSDate *uploadDate;
@property (retain) NSString *metricsAccountID;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (long long)hardFailureCountForEventType:(id)a0;
- (void)addEventDict:(id)a0 toTable:(id)a1;
- (long long)softFailureCountForEventType:(id)a0;
- (void)clearAllData;
- (void)incrementSuccessCountForEventType:(id)a0;
- (id)summaryCounts;
- (void)addEventDict:(id)a0 toTable:(id)a1 timestampBucket:(unsigned int)a2;
- (void)dealloc;
- (void)incrementHardFailureCountForEventType:(id)a0;
- (void)removeAllSamplesForName:(id)a0;
- (long long)successCountForEventType:(id)a0;
- (void)addSample:(id)a0 forName:(id)a1;
- (BOOL)tryToOpenDatabase;
- (void)incrementSoftFailureCountForEventType:(id)a0;

@end
