@class NSString, NSNumber;

@interface ENAdvertisementSQLiteStore : NSObject {
    struct sqlite3 { } *_database;
    struct sqlite3_stmt **_preparedStatements;
}

@property (retain, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;

+ (id)statementStringForStatementType:(unsigned long long)a0;
+ (BOOL)isCentralStore:(id)a0;
+ (id)storePathsInFolderPath:(id)a0;
+ (BOOL)temporaryStoresPresentInFolderPath:(id)a0;
+ (BOOL)isStore:(id)a0;
+ (BOOL)removeAllStoresFromDiskWithFolderPath:(id)a0;
+ (id)temporaryStorePathsInFolderPath:(id)a0;
+ (struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })advertisementForSQLiteStatement:(struct sqlite3_stmt { } *)a0;
+ (id)temporaryStoreInFolderPath:(id)a0 error:(id *)a1;
+ (BOOL)removeAllDatabaseFilesWithDatabasePath:(id)a0;
+ (BOOL)isTemporaryStore:(id)a0;
+ (void)enumerateTemporaryStoresInFolderPath:(id)a0 handler:(id /* block */)a1;
+ (id)errorForSQLiteResult:(int)a0;
+ (id)temporaryStoresInFolderPath:(id)a0;
+ (BOOL)removeAllTemporaryStoresFromDiskWithFolderPath:(id)a0 lastModifiedBeforeDate:(id)a1;
+ (BOOL)storesPresentInFolderPath:(id)a0;
+ (id)centralStoreInFolderPath:(id)a0 error:(id *)a1;

- (id)initWithPath:(id)a0;
- (int)initializeRPIBufferModule;
- (int)openDatabase;
- (int)checkpointWAL;
- (int)bindRPIBuffer:(const void *)a0 count:(unsigned long long)a1 validityBuffer:(const void *)a2 validRPICount:(unsigned long long)a3 toSQLiteStatement:(struct sqlite3_stmt { } *)a4;
- (id)queryFilterWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1 attenuationThreshold:(unsigned char)a2;
- (int)endDatabaseTransaction;
- (int)rollbackDatabaseTransaction;
- (unsigned long long)getAdvertisementsMatchingRPIBuffer:(const void *)a0 count:(unsigned long long)a1 validityBuffer:(const void *)a2 validRPICount:(unsigned long long)a3 matchingAdvertisementBuffer:(struct **)a4 error:(id *)a5;
- (int)configureDatabase;
- (void)enumeratePreparedStatements:(id /* block */)a0;
- (BOOL)purgeAndRemoveFromDisk:(BOOL)a0;
- (void)dealloc;
- (int)migrateDatabase;
- (id)beaconCountMetricsWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (int)beginDatabaseTransaction;
- (void)disconnectFromDatabase;
- (BOOL)cloneStoreTo:(id)a0;
- (int)closeDatabase;
- (int)setVersionCurrent;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (struct sqlite3_stmt { } *)preparedStatementOfType:(unsigned long long)a0;
- (int)initializePreparedStatements;
- (int)migrateFromVersion:(int)a0;
- (BOOL)saveContactTracingAdvertisementBuffer:(struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (int)initializeAdvertisementTable;
- (BOOL)refreshStoredAdvertismentCountWithError:(id *)a0;
- (BOOL)transactionNeededForMigrationFromVersion:(int)a0;
- (int)enumerateAdvertisments:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)purgeAdvertismentsRecordedPriorToDate:(id)a0 error:(id *)a1;
- (BOOL)importContentsOfStore:(id)a0 error:(id *)a1;
- (BOOL)connectToDatabaseAndReturnError:(id *)a0;
- (int)bindAdvertisement:(struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })a0 toSQLiteStatement:(struct sqlite3_stmt { } *)a1;

@end
