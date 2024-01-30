@interface HealthExperienceUI.CloudSyncStateObserver : NSObject <HKCloudSyncObserverDelegate> {
    void /* unknown type, empty encoding */ _cachedFirstRestoreState;
    void /* unknown type, empty encoding */ firstRestoreStateChangeHandler;
    void /* unknown type, empty encoding */ stateChangeHandler;
    void /* unknown type, empty encoding */ cloudSyncObserver;
    void /* unknown type, empty encoding */ store;
}

- (void)cloudSyncObserverStatusUpdated:(id)a0 status:(id)a1;
- (void)cloudSyncObserver:(id)a0 syncFailedWithError:(id)a1;
- (void)cloudSyncObserverSyncCompleted:(id)a0;
- (void)cloudSyncObserver:(id)a0 syncDidStartWithProgress:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
