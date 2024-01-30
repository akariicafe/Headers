@class NSArray, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray *hardFailures;
@property (readonly) NSArray *softFailures;
@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *samples;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (void)incrementSuccessCountForEventType:(id)a0;
- (void)removeAllSamplesForName:(id)a0;
- (void)addEventDict:(id)a0 toTable:(id)a1 timestampBucket:(unsigned int)a2;
- (long long)softFailureCountForEventType:(id)a0;
- (void)dealloc;
- (void)clearAllData;
- (void)addSample:(id)a0 forName:(id)a1;
- (BOOL)tryToOpenDatabase;
- (void)incrementHardFailureCountForEventType:(id)a0;
- (id)deserializedRecords:(id)a0;
- (long long)hardFailureCountForEventType:(id)a0;
- (long long)successCountForEventType:(id)a0;
- (void)addEventDict:(id)a0 toTable:(id)a1;
- (void)incrementSoftFailureCountForEventType:(id)a0;
- (id)summaryCounts;

@end
