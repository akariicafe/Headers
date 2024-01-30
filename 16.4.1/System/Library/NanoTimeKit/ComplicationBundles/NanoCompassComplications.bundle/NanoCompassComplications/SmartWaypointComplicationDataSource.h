@class NCWaypoint, NSUserDefaults, NSDate;

@interface SmartWaypointComplicationDataSource : NanoCompassBaseComplicationDataSource {
    BOOL _isActive;
    NSUserDefaults *_defaults;
}

@property (retain, nonatomic) NCWaypoint *targetedWaypoint;
@property (retain, nonatomic) NSDate *targetedViewUsageTimestamp;
@property (retain, nonatomic) NCWaypoint *waypoint;

+ (id)sectionIdentifier;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)complicationNameLocalizationKey;
+ (id)appNameLocalizationKey;
+ (id)bundleIdentifierSuffix;

- (void)becomeActive;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)_needsInvalidation;
- (void)_handleDeviceLockChange;
- (id)alwaysOnTemplate;
- (void)becomeInactive;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (BOOL)_complicationTargetingIsActive;
- (id)_templateWithSampleWaypointLabel:(id)a0 symbol:(id)a1 color:(id)a2;
- (id)_templateWithWaypoint:(id)a0 location:(id)a1 heading:(id)a2 deviceCalibrated:(BOOL)a3 showNoData:(BOOL)a4 showInactiveState:(BOOL)a5 showAlwaysOnState:(BOOL)a6;
- (BOOL)isParkedCarComplication;
- (BOOL)isSmartComplication;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;

@end
