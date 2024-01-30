@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLTrimInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLTrimDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)archiveEntriesFinished;
+ (id)lastArchivePath;
+ (id)storageQueue;
+ (id)allArchivePaths;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)archiveEntriesWithComparisons:(id)a0;

- (BOOL)isInterrupted;
- (void)migrate;
- (void)disable;
- (void)enable;
- (void)cleanup;
- (id)getArchivingCriteria;
- (void)deprecateTables;
- (void)trimExtendedPersistenceLog;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runArchiveJobs;
- (id)init;
- (void)runInitialActivity;
- (void)migrateArchive:(id)a0;
- (void)recover;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)dealloc;
- (void)scheduleArchiveJobs;
- (BOOL)eliglibleToTrimEPSQLForDate:(id)a0;
- (void)runActivityWithLastCompletedDate:(id)a0;

@end
