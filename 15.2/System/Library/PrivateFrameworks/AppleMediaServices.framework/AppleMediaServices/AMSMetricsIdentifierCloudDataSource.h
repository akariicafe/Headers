@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak, nonatomic) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_database;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;
+ (id)_sharedQueue;

- (id)_createRecordForIdentifier:(id)a0;
- (id)_createRecordForIdentifierStore:(id)a0;
- (id)_parseRecord:(id)a0 error:(id *)a1;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeRecordWithIdentifier:(id)a0;

@end
