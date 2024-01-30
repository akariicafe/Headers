@class HKObserverSet, NSString, HDProfile, HDHealthRecordsProfileExtension, NSOperationQueue, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface HDClinicalIngestionManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {
    HDHealthRecordsProfileExtension *_profileExtension;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_ingestionOperationQueue;
    long long _ingestionState;
    HKObserverSet *_ingestionStateObserverSet;
    long long _inFlightTaskCount;
    BOOL _scheduleExtractionOnProtectedDataBecomingAvailable;
    BOOL _didCheckWhetherResourcesNeedExtraction;
    NSDate *_ingestionSchedulingBlockedUntil;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (nonatomic) BOOL unitTesting_preventExtractionScheduling;
@property (copy, nonatomic) id /* block */ unitTesting_didCallDidReceiveFHIRResourceSyncEntities;
@property (copy, nonatomic) id /* block */ unitTesting_didCompleteScheduledExtraction;
@property (copy, nonatomic) id /* block */ unitTesting_didScheduleIngestionAfterQueryNotification;
@property (readonly) long long currentIngestionState;
@property long long periodicIngestionFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_queue_performProtectedDataAvailableChecks;
- (id)initWithProfileExtension:(id)a0;
- (void)_setUpPeriodicIngestionWithFrequency:(long long)a0;
- (void).cxx_destruct;
- (void)_queue_didReceiveFHIRResourceSyncEntities;
- (void)_performExtractionWithReason:(id)a0 completion:(id /* block */)a1;
- (void)unregisterIngestionStateChangeObserver:(id)a0;
- (void)registerIngestionStateChangeObserver:(id)a0;
- (void)dealloc;
- (void)_queue_setIngestionState:(long long)a0;
- (void)_badgeForNewHealthRecordsFromTask:(id)a0;
- (void)_performMaintenanceIngestionWithReason:(id)a0 completion:(id /* block */)a1;
- (void)daemonReady:(id)a0;
- (void)_performPeriodicIngestionForFrequency:(long long)a0 completion:(id /* block */)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)scheduleIngestionWithReason:(id)a0;
- (void)notifyForNewHealthRecords;
- (void)badgeForNewHealthRecords;
- (void)_registerForDaemonReady;
- (void)_scheduleExtractionWithReason:(id)a0;
- (void)_notifyForNewHealthRecordsFromTask:(id)a0;
- (id)_periodicIngestionCriteriaWithPreviousCriteria:(id)a0 frequency:(long long)a1;
- (id)_initWithProfileExtension:(id)a0;
- (void)_taskWillReallyBegin;
- (BOOL)_queue_shouldScheduleIngestion;
- (void)_taskDidFinish:(id)a0;
- (void)performIngestionWithContext:(id)a0 accountIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveFHIRResourceSyncEntities;
- (void)didRecieveHealthRecordsQueryNotification:(id)a0;
- (void)_resetIngestionScheduleBlock;
- (void)_addIngestionTask:(id)a0;

@end
