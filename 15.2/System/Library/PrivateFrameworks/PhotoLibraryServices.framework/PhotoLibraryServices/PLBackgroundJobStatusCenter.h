@class NSString, NSDictionary, NSMutableSet, NSMutableArray;

@interface PLBackgroundJobStatusCenter : NSObject <PLBackgroundJobServiceObserver> {
    NSMutableArray *_registrationEventsQueue;
    NSMutableArray *_runningEventsQueue;
    NSMutableSet *_workersResponsibleForRegistration;
}

@property (readonly) NSDictionary *statusDumpDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)recordStartingWorker:(id)a0 withJobCount:(unsigned long long)a1;
- (void)recordFinishingWorker:(id)a0;
- (void)_addRegistrationEventToQueue:(id)a0;
- (void)_addRunningEventToQueue:(id)a0;
- (void)_recordRegistrationEventToState:(unsigned long long)a0;
- (void)_recordNonRegistrationEvent;
- (void)recordStoppingWorker:(id)a0 withRemainingJobCount:(unsigned long long)a1;
- (void)recordWorkerHasPendingJobs:(id)a0;

@end
