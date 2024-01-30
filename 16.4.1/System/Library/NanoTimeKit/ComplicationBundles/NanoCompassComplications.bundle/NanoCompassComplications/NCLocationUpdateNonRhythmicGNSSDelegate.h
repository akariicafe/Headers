@class NSTimer, PCPersistentTimer, RBSAssertion;

@interface NCLocationUpdateNonRhythmicGNSSDelegate : NCLocationUpdateBaseDelegate {
    NSTimer *_locationQueryDurationTimer;
    PCPersistentTimer *_locationUpdateIdleTimer;
    RBSAssertion *_locationQueryAssertion;
}

- (void)_startIdleTimer;
- (void).cxx_destruct;
- (void)stopLocationUpdates;
- (double)initialAccuracy;
- (void)_cancelLocationAssertion;
- (void)_idleTimerFired:(id)a0;
- (void)_invalidateIdleTimer;
- (void)_invalidateLocationTimersAndAssertion;
- (void)_invalidateQueryDurationTimer;
- (void)_startLocationQueryDurationTimer;
- (void)_takeLocationAssertion;
- (void)adjustLocationUpdateAccuracy;
- (double)expectedAccuracy;
- (void)startLocationUpdatesWithAccuracy:(double)a0;

@end
