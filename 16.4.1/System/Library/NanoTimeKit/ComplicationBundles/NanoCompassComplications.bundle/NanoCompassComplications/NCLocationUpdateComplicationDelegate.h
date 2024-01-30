@class PCPersistentTimer;

@interface NCLocationUpdateComplicationDelegate : NCLocationUpdateBaseDelegate {
    PCPersistentTimer *_waypointComplicationDeactivationTimer;
    BOOL _waypointIsActivated;
}

- (void).cxx_destruct;
- (id)_endOfDayForDate:(id)a0;
- (id)startLocationUpdatesWithHandler:(id /* block */)a0;
- (double)initialAccuracy;
- (void)_complicationDeactivationTimerFired:(id)a0;
- (id)_getActivationStartDate;
- (void)_invalidateActivationTimer;
- (void)_setupDeactivationTimerWithStartDate:(id)a0;
- (void)activateWaypointComplication;
- (void)deactivateWaypointComplication;
- (double)expectedAccuracy;

@end
