@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLVacuumInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double CESQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLVacuumDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)storageQueue;
+ (id)allArchivePaths;
+ (id)workQueue;
+ (id)archiveEntriesFinished;
+ (id)archiveEntriesUnfinished;
+ (id)lastArchivePath;
+ (void)systemTimeChangedByOffset:(double)a0;

- (void)cleanup;
- (void)enable;
- (void)migrate;
- (void)disable;
- (void)deprecateTables;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)migrateArchive:(id)a0;
- (void)scheduleArchiveJobs;
- (void)runArchiveJobs;
- (void)runInitialActivity;
- (void)dealloc;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)deprecateTablesEPSQL;
- (void)trimCleanEnergyLog;
- (void)recover;
- (id)init;
- (void)trimExtendedPersistenceLog;
- (id)getArchivingCriteria;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isInterrupted;

@end
