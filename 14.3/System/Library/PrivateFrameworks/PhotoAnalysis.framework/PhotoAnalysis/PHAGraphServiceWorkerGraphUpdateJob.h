@class NSString, NSConditionLock, PHAGraphManager, NSDate, NSObject;
@protocol OS_os_transaction;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration>

@property (nonatomic) BOOL finished;
@property (nonatomic) float completionScore;
@property (copy) NSString *label;
@property (retain) NSDate *creationDate;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) PHAGraphManager *graphManager;
@property (retain) id pgManager;
@property (nonatomic) long long originalExecutionContext;
@property (retain) NSConditionLock *completionWaitLock;
@property (copy) id /* block */ updateBlock;
@property (copy) id /* block */ completionBlock;
@property BOOL isChangeProcessingJob;
@property (readonly, nonatomic) BOOL isRebuildJob;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)graphUpdateJobWithLibrary:(id)a0 scenario:(unsigned long long)a1 label:(id)a2 updateBlock:(id /* block */)a3;

- (long long)executionContext;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;
- (void)graphUpdateMadeProgress:(double)a0;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)graphIsReady;
- (void)markAsFinishedWithCompletionScore:(float)a0;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 label:(id)a2 library:(id)a3;
- (void)updateCompletionScore:(float)a0;
- (void)onGraphUpdateComplete;
- (void)_restoreGraphUpdateManagerExecutionContext;
- (void)_makeWorkerAvailable;
- (void)_transitionWorkerStateToWorking;
- (void)_resetGraphManager;
- (void)markJobFinishWorkForCancellation;
- (void)prepareProcessingForWorker:(id)a0;
- (void)additionalWorkAfterUpdate;

@end
