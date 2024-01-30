@class HDPeriodicActivity, NSString, HDDaemon;

@interface HDMedicationPeriodicScheduler : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDDaemon *_daemon;
    HDPeriodicActivity *_periodicActivity;
}

@property (readonly, nonatomic) HDPeriodicActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
