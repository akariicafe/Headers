@interface BRCSyncUpScheduler : BRCFSSchedulerBase

- (void)schedule;
- (id)initWithAccountSession:(id)a0;
- (void)createSyncUpJobForRowID:(unsigned long long)a0 inZone:(id)a1;
- (unsigned long long)inFlightDiffsForItem:(id)a0 zoneRowID:(id)a1;
- (void)_clearSyncUpErrorForItem:(id)a0;
- (void)_scheduleSyncUpJob:(id)a0;
- (void)createSyncUpJobForItem:(id)a0 inZone:(id)a1;
- (void)deleteSyncUpJobsForItem:(id)a0;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (unsigned long long)finishSyncUpForItem:(id)a0 inZone:(id)a1 success:(BOOL)a2;
- (unsigned long long)inFlightDiffsForItem:(id)a0;
- (BOOL)isItemInSyncUpAndInFlight:(id)a0;
- (BOOL)isItemInSyncUpAndInFlight:(id)a0 inZone:(id)a1;
- (BOOL)isItemPendingSyncUp:(id)a0;
- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (unsigned long long)postponeSyncUpForItem:(id)a0 inZone:(id)a1;
- (void)prepareItemForSyncUp:(id)a0 inFlightDiffs:(unsigned long long)a1 inZone:(id)a2;
- (unsigned int)recoverAndReportMissingJobs;
- (void)setState:(int)a0 forItem:(id)a1 zone:(id)a2;

@end
