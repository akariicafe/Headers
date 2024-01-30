@class NSString;

@interface HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject <HKCloudSyncObserverDelegate> {
    void /* unknown type, empty encoding */ cloudSyncObserver;
    void /* unknown type, empty encoding */ preconditionCompletion;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ waitUntilShouldProceed;
    void /* unknown type, empty encoding */ completionQueue;
}

@property (nonatomic, readonly) NSString *description;

- (void)cloudSyncObserver:(id)a0 syncDidStartWithProgress:(id)a1;
- (void)cloudSyncObserverStatusUpdated:(id)a0 status:(id)a1;
- (void)cloudSyncObserverSyncCompleted:(id)a0;
- (void)cloudSyncObserver:(id)a0 syncFailedWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
