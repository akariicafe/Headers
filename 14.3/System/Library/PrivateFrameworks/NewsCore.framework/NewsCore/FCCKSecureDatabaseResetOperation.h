@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL deleteZones;
@property (nonatomic) BOOL restoreSecureSentinel;
@property (nonatomic) BOOL restoreZoneContents;
@property (copy, nonatomic) id /* block */ resetCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_deleteZones;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_rawRecordsToSave;

@end
