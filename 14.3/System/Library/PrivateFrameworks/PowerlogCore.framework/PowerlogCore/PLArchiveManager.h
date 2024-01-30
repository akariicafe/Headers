@class NSString, NSMutableArray;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double mainDBDuration;
@property double allDBDuration;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)lastArchivePath;
+ (id)allArchivePaths;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)storageQueue;
+ (id)archiveEntriesFinished;
+ (id)archiveEntriesWithComparisons:(id)a0;

- (void)enable;
- (BOOL)isInterrupted;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleArchiveJobs;
- (void)cleanup;
- (void)dealloc;
- (void)disable;
- (void)runArchiveJobs;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)migrate;
- (void)migrateArchive:(id)a0;
- (void)deprecateTables;
- (id)getArchivingCriteria;
- (void)recover;
- (void)runInitialActivity;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;

@end
