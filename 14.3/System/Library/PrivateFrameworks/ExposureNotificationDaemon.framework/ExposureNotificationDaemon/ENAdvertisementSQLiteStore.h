@class NSString, NSNumber;

@interface ENAdvertisementSQLiteStore : NSObject {
    struct sqlite3 { } *_database;
    struct sqlite3_stmt **_preparedStatements;
}

@property (retain, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;

+ (id)temporaryStorePathsInFolderPath:(id)a0;
+ (BOOL)isCentralStore:(id)a0;
+ (BOOL)isTemporaryStore:(id)a0;
+ (BOOL)isStore:(id)a0;
+ (id)storePathsInFolderPath:(id)a0;
+ (id)errorForSQLiteResult:(int)a0;
+ (id)statementStringForStatementType:(unsigned long long)a0;
+ (struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })advertisementForSQLiteStatement:(struct sqlite3_stmt { } *)a0;
+ (BOOL)removeAllDatabaseFilesWithDatabasePath:(id)a0;
+ (id)centralStoreInFolderPath:(id)a0 error:(id *)a1;
+ (id)temporaryStoreInFolderPath:(id)a0 error:(id *)a1;
+ (BOOL)temporaryStoresPresentInFolderPath:(id)a0;
+ (id)temporaryStoresInFolderPath:(id)a0;
+ (void)enumerateTemporaryStoresInFolderPath:(id)a0 handler:(id /* block */)a1;
+ (BOOL)storesPresentInFolderPath:(id)a0;
+ (BOOL)removeAllStoresFromDiskWithFolderPath:(id)a0;
+ (BOOL)removeAllTemporaryStoresFromDiskWithFolderPath:(id)a0 lastModifiedBeforeDate:(id)a1;

- (id)initWithPath:(id)a0;
- (int)configureDatabase;
- (void).cxx_destruct;
- (void)dealloc;
- (int)closeDatabase;
- (int)openDatabase;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)queryFilterWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1 attenuationThreshold:(unsigned char)a2;
- (id)beaconCountMetricsWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (BOOL)connectToDatabaseAndReturnError:(id *)a0;
- (void)disconnectFromDatabase;
- (BOOL)saveContactTracingAdvertisementBuffer:(struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; } *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (int)enumerateAdvertisments:(id /* block */)a0;
- (int)migrateDatabase;
- (int)initializeAdvertisementTable;
- (int)initializeRPIBufferModule;
- (int)initializePreparedStatements;
- (BOOL)refreshStoredAdvertismentCountWithError:(id *)a0;
- (BOOL)purgeAndRemoveFromDisk:(BOOL)a0;
- (void)enumeratePreparedStatements:(id /* block */)a0;
- (int)migrateFromVersion:(int)a0;
- (BOOL)transactionNeededForMigrationFromVersion:(int)a0;
- (int)beginDatabaseTransaction;
- (int)setVersionCurrent;
- (int)endDatabaseTransaction;
- (int)rollbackDatabaseTransaction;
- (struct sqlite3_stmt { } *)preparedStatementOfType:(unsigned long long)a0;
- (int)bindAdvertisement:(struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; })a0 toSQLiteStatement:(struct sqlite3_stmt { } *)a1;
- (int)bindRPIBuffer:(const void *)a0 count:(unsigned long long)a1 validityBuffer:(const void *)a2 validRPICount:(unsigned long long)a3 toSQLiteStatement:(struct sqlite3_stmt { } *)a4;
- (int)checkpointWAL;
- (BOOL)importContentsOfStore:(id)a0 error:(id *)a1;
- (unsigned long long)getAdvertisementsMatchingRPIBuffer:(const void *)a0 count:(unsigned long long)a1 validityBuffer:(const void *)a2 validRPICount:(unsigned long long)a3 matchingAdvertisementBuffer:(struct **)a4 error:(id *)a5;
- (BOOL)purgeAdvertismentsRecordedPriorToDate:(id)a0 error:(id *)a1;
- (BOOL)cloneStoreTo:(id)a0;

@end
