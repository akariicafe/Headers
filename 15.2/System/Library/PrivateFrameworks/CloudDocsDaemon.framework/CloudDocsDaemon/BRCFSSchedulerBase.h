@class NSString, BRCAccountSession, PQLNameInjection, NSObject, BRCDeadlineSource;
@protocol OS_dispatch_group, OS_dispatch_workloop;

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {
    BRCAccountSession *_session;
    BRCDeadlineSource *_schedulerSource;
    NSObject<OS_dispatch_workloop> *_schedulerWorkloop;
    BOOL _firstSchedulingAfterStartupDone;
}

@property (nonatomic) BOOL hasWork;
@property (nonatomic) BOOL hasActiveWork;
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup;
@property (retain) NSObject<OS_dispatch_group> *hasActiveWorkGroup;
@property (readonly) PQLNameInjection *tableName;
@property (readonly) NSString *name;
@property (readonly) BOOL closed;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signal;
- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (void)close;
- (BOOL)canScheduleMoreJobs;
- (unsigned int)recoverAndReportMissingJobs;
- (void)_close;
- (void)describeInBuffer:(id)a0 aggregateOfJobsMatching:(id)a1 context:(id)a2;
- (void)schedule;
- (void).cxx_destruct;
- (void)signalWithDeadline:(long long)a0;
- (void)deleteExpiredJobs;
- (void)suspend;
- (void)resume;
- (void)deleteJobsMatching:(id)a0;
- (void)cancel;
- (BOOL)canRetryJobWithID:(id)a0;
- (id)descriptionForJobsMatching:(id)a0 ordering:(id)a1 additionalColumns:(id)a2 additionalValuesHandler:(id /* block */)a3 context:(id)a4;
- (void)computeStamps:(struct throttle_stamps { unsigned int x0; int x1; long long x2; long long x3; long long x4; } *)a0 forJobID:(id)a1 throttle:(id)a2 shouldBackoff:(BOOL)a3;
- (long long)updateStamps:(struct throttle_stamps { unsigned int x0; int x1; long long x2; long long x3; long long x4; } *)a0 throttle:(id)a1 now:(long long)a2;
- (BOOL)setState:(int)a0 forJobsMatching:(id)a1;
- (void)checkIfHasWork;
- (id)initWithSession:(id)a0 name:(id)a1 tableName:(id)a2;
- (BOOL)haveActiveJobsMatching:(id)a0;
- (int)jobStateFor:(id)a0;
- (id)descriptionForJobsMatching:(id)a0 context:(id)a1;
- (id)aggregateDescriptionForJobsMatching:(id)a0 context:(id)a1;
- (unsigned long long)postponeJobID:(id)a0 withThrottle:(id)a1;
- (struct brc_job_update { int x0; long long x1; })insertOrUpdateJobID:(id)a0 throttle:(id)a1 withState:(int)a2 insertedSQLColumn:(id)a3 insertedSQLValues:(id)a4 updatedSQLValues:(id)a5;
- (void)rescheduleSuspendedJobsMatching:(id)a0 inState:(int)a1;
- (BOOL)setState:(int)a0 forJobID:(id)a1;
- (void)resetBackoffForJobWithID:(id)a0;
- (void)scheduleWithBatchSize:(int)a0 whereSQLClause:(id)a1 columns:(id)a2 actionHandler:(id /* block */)a3;

@end
