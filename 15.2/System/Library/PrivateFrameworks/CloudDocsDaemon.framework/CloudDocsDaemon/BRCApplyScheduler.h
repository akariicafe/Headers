@class NSString, NSMutableSet, BRCCountedSet;

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable> {
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_clientZonesWatchingFaults;
    BOOL _applyCountReachedMax;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)createApplyJobFromServerItem:(id)a0 localItem:(id)a1 state:(int)a2 kind:(unsigned int)a3;
- (void)setState:(int)a0 forServerItem:(id)a1 localItem:(id)a2;
- (void)_fixupCZMAliasTargetWithAlias:(id)a0 target:(id)a1;
- (void)rescheduleMissingTargetAliasesWithTarget:(id)a0;
- (void)didMarkSyncIdleForServerRank:(long long)a0 zone:(id)a1;
- (void)stopMonitoringFaultingForZone:(id)a0;
- (BOOL)canScheduleMoreJobs;
- (unsigned int)recoverAndReportMissingJobs;
- (void)_close;
- (id)initWithAccountSession:(id)a0;
- (void)describeInBuffer:(id)a0 aggregateOfJobsMatching:(id)a1 context:(id)a2;
- (id)descriptionForRejectedItem:(id)a0 context:(id)a1;
- (void)_setState:(int)a0 andApplyKind:(unsigned int)a1 forJobID:(id)a2;
- (id)descriptionForServerItem:(id)a0 context:(id)a1;
- (void)schedule;
- (void)monitorFaultingForZone:(id)a0;
- (void)didSyncDownZone:(id)a0 requestID:(unsigned long long)a1 upToRank:(long long)a2 caughtUpWithServer:(BOOL)a3;
- (void)didCompleteCrossZoneMigrationForAppLibrary:(id)a0;
- (void).cxx_destruct;
- (void)didCreateMissingParentID:(id)a0 zone:(id)a1;
- (void)setState:(int)a0 andApplyKind:(unsigned int)a1 forRank:(long long)a2 zoneRowID:(id)a3;
- (void)didReparentOrKillItemID:(id)a0 parentItemID:(id)a1 zone:(id)a2;
- (void)repopulateJobsForZone:(id)a0;
- (void)_rescheduleRank:(long long)a0 inState:(int)a1 forZone:(id)a2;
- (void)deleteExpiredJobs;
- (void)endWriteCoordinationInAppLibrary:(id)a0 rowID:(long long)a1;
- (unsigned long long)_writeCoordinationCount;
- (void)setState:(int)a0 andApplyKind:(unsigned int)a1 forServerItem:(id)a2 localItem:(id)a3;
- (void)_scheduleApplyJobWithID:(id)a0 zone:(id)a1 applyKind:(unsigned int)a2;
- (void)_handleWatchingFaults;
- (BOOL)startWriteCoordinationInAppLibrary:(id)a0;
- (void)resetBackoffForServerItem:(id)a0;
- (void)setState:(int)a0 forRank:(long long)a1 zoneRowID:(id)a2;

@end
