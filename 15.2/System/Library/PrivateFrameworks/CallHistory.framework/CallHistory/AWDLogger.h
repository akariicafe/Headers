@class AWDServerConnection;

@interface AWDLogger : CHLogger

@property (retain, nonatomic) AWDServerConnection *awdServer;

+ (id)instance;

- (void)commCenterMigrationResult:(BOOL)a0 withMigratedCallCount:(unsigned long long)a1;
- (void)syncSuccess:(unsigned long long)a0 withDownloadRecordCount:(unsigned long long)a1;
- (void)databaseMigrationResult:(BOOL)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)deleteAll:(unsigned long long)a0;
- (void)gizmoDatabaseMigrationFailure;
- (void)syncFailure:(unsigned int)a0;
- (void)callAddedWithNilUuid:(unsigned long long)a0 withCallStatus:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)bootstrapGizmo:(unsigned long long)a0;
- (void)uninitializedDatabaseSave;
- (void)entitlementRejection:(int)a0;
- (void)submitMetric:(id)a0 withId:(unsigned int)a1;
- (void)databaseSaveError:(long long)a0 withTableName:(id)a1;

@end
