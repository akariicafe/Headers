@interface WaypointsComplicationDataSource : SmartWaypointComplicationDataSource

+ (id)sectionIdentifier;
+ (id)complicationDescriptors;
+ (BOOL)useComplicationDescriptorsOnCompanion;
+ (id)_descriptorUserInfoForWaypoint:(id)a0;
+ (id)bundleIdentifierSuffix;

- (void)dealloc;
- (id)alwaysOnTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;
- (id)_getWaypointUUIDFromDescriptor:(id)a0;
- (id)_getWaypointFromDescriptor:(id)a0;
- (BOOL)isParkedCarComplication;
- (BOOL)isSmartComplication;
- (id)newTemplate;

@end
