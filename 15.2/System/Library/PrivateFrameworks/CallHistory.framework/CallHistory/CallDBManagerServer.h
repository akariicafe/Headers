@interface CallDBManagerServer : CallDBManager

+ (id)getDestinationModelForVersion:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0 withSourceVersion:(long long)a1;
+ (id)getUniqueIdsForAllRecords:(id)a0;
+ (id)getObjectIdsForAllRecords:(id)a0;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)a0 andHavingObjectIds:(id)a1;
+ (id)getDestinationModel:(long long)a0;
+ (id)downgradeDatabaseAtLocation:(id)a0 toVersion:(long long)a1;

- (void)createPermanent;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (void)moveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)a0 isEncrypted:(BOOL)a1;
- (BOOL)createCallDBProperties;
- (BOOL)bootUpDBAtLocation:(id)a0 isEncrypted:(BOOL)a1;
- (BOOL)handleBootUpFailure:(id)a0;
- (id)createMOCForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)modifyCallRecordForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2 modifyCallRecord:(id /* block */)a3;
- (void)populateServiceProviderAndCallCategory:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)populateHandleType:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)populateRecentCallRemoteParticipantHandles:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)prepareDatabaseForNextStepInMigration:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)handleDatabaseMigration:(id)a0 isEncrypted:(BOOL)a1 isRetry:(BOOL)a2;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)a0 fromManagedObjectContext:(id)a1;
- (void)prepareForMigrationDBAtURL:(id)a0 withModelAtURL:(id)a1 andIsEncrypted:(BOOL)a2;

@end
