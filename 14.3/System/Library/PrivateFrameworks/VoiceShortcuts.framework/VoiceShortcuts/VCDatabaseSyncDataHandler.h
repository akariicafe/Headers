@class WFDatabaseResult;

@interface VCDatabaseSyncDataHandler : VCSyncDataHandler <WFDatabaseResultObserver>

@property (readonly, nonatomic) WFDatabaseResult *result;

+ (Class)changeClass;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (BOOL)deleteSyncedData:(id *)a0;
- (void)databaseResultDidChange:(id)a0;

@end
