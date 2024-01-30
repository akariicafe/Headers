@class RTRoutineManager;

@interface ParkedCarWaypointComplicationDataSource : SmartWaypointComplicationDataSource {
    BOOL _hasVehicleEvents;
    RTRoutineManager *_routineManager;
    BOOL _monitoringParkedCarEvents;
}

+ (id)sectionIdentifier;
+ (id)complicationNameLocalizationKey;
+ (id)bundleIdentifierSuffix;

- (void)becomeActive;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_startMonitoringVehicleEvents;
- (id)alwaysOnTemplate;
- (void)becomeInactive;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (void)_monitorParkedCarEvents;
- (id)_newTemplateWithAlwaysOn:(BOOL)a0;
- (void)_stopMonitoringVehicleEvents;
- (void)_updateParkedCarWaypointWith:(id)a0 withError:(id)a1;
- (BOOL)isParkedCarComplication;
- (BOOL)isSmartComplication;
- (id)newTemplate;

@end
