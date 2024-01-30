@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak, nonatomic) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_sharedQueue;
+ (id)_database;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (void)removeRecordWithIdentifier:(id)a0;
- (id)_createRecordForIdentifier:(id)a0;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;
- (id)_parseRecord:(id)a0 error:(id *)a1;
- (id)_createRecordForIdentifierStore:(id)a0;
- (void).cxx_destruct;

@end
