@class NSDictionary, NSMutableSet;

@interface PPTSQLStorage : PPTStorage

@property BOOL storageStarted;
@property (retain) NSDictionary *connectionByStorage;
@property (retain) NSMutableSet *entryKeysToSetup;

+ (id)trimConditionsForCESQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEPSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEntryKey:(id)a0 trimDate:(double)a1 currDate:(double)a2;
+ (id)trimConditionsForPLSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForStorage:(int)a0 trimDate:(id)a1;

- (void)setupFolders;
- (id)CESQLConnection;
- (BOOL)updateTable:(id)a0 transferDataForKeys:(id)a1;
- (int)storageForConnection:(id)a0;
- (void)setupMetadataStorage;
- (void)updateMetadata:(id)a0 updateMetrics:(id)a1 addMetrics:(id)a2;
- (void)createMetadataTable;
- (id)EPSQLConnection;
- (void)setupStorageForEntryKey:(id)a0;
- (id)PreUnlockEPSQLConnection;
- (void)setupDBConnections;
- (id)connectionForKey:(id)a0;
- (void)persistMetadata;
- (void)handleSchemaMismatchForTable:(id)a0;
- (void)handleMetadataVersionChange;
- (void)closeAllConnections;
- (id)setupDBConnectionAtPath:(id)a0;
- (id)init;
- (void)setupTableForEntryKey:(id)a0;
- (id)metricsToAddForStorage:(id)a0 processedMetrics:(id)a1;
- (void)deleteOldMetadataStore;
- (void)setupTableForEntryKey:(id)a0 withName:(id)a1;
- (id)metricsToUpdateForStorage:(id)a0 processedMetrics:(id)a1;
- (void).cxx_destruct;
- (id)PLSQLConnection;
- (void)startStorage;

@end
