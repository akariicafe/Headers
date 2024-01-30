@class HDPeriodicActivity, NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDPeriodicActivity *_activity;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_lastAttemptDateWithCompleted:(BOOL *)a0;
- (void)dealloc;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 prunedObjectLimit:(unsigned long long)a2 prunedObjectTransactionLimit:(unsigned long long)a3 error:(id *)a4;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 error:(id *)a2;
- (void)daemonReady:(id)a0;
- (id)diagnosticDescription;
- (void)_setLastAttemptDate:(id)a0 completed:(BOOL)a1;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)a0 error:(id *)a1;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (BOOL)_pruneDatabaseWithNowDate:(id)a0 prunedObjectLimit:(unsigned long long)a1 prunedObjectTransactionLimit:(unsigned long long)a2 error:(id *)a3;

@end
