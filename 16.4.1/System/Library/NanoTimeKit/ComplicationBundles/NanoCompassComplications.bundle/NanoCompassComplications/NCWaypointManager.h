@class NCWaypoint, NSManagedObjectContext, NSString, NSPersistentContainer;

@interface NCWaypointManager : NSObject {
    NSString *_bundleIdentifier;
}

@property (retain, nonatomic) NCWaypoint *parkedCarWaypoint;
@property (retain, nonatomic) NCWaypoint *targetedWaypoint;
@property (readonly) NSPersistentContainer *persistentContainer;
@property (readonly) NSManagedObjectContext *viewContext;

+ (id)sharedAppManager;
+ (id)sharedCompassToolManager;
+ (id)sharedComplicationManager;

- (void).cxx_destruct;
- (void)_fetchOrCreateParkedCarWaypoint;
- (void)updateWaypoint:(id)a0;
- (void)deleteWaypoint:(id)a0;
- (unsigned long long)waypointCountContainingKeyword:(id)a0;
- (void)_commitToCoreData;
- (id)_convertToNCWaypointList:(id)a0;
- (id)_coreDataWaypointWithUUID:(id)a0;
- (id)_excludingDisabledWaypoints:(id)a0;
- (id)_fetchItemsWithRequest:(id)a0;
- (id)_fetchWaypointsFromCoreDataIncludingDisabled:(BOOL)a0;
- (id)_fetchWaypointsIncludingDisabled:(BOOL)a0;
- (void)_postParkedCarWaypointChangedNotification;
- (void)_postWaypointListChangedNotification;
- (void)_printWaypointList:(id)a0;
- (void)_saveWaypoint:(id)a0;
- (void)_updateWaypointInViewContext:(id)a0;
- (BOOL)_useCloudKitContainer;
- (id)addWaypointAtLocation:(id)a0 withAltitude:(id)a1 withLabel:(id)a2 withColor:(id)a3 withSymbol:(id)a4 withType:(long long)a5 isEnabled:(BOOL)a6;
- (void)deleteAllWaypoints;
- (id)fetchEnabledWaypoints;
- (id)fetchTargetedWaypoint;
- (id)fetchWaypoints;
- (id)fetchWaypointsWithoutAltitude;
- (id)initForBundleIdentifier:(id)a0 supportsParkedCarWaypoint:(BOOL)a1;
- (void)updateParkedCarWaypointWithLocation:(id)a0;
- (void)updateParkedCarWaypointWithLocation:(id)a0 withAltitude:(id)a1;
- (void)updateWaypointWithUUID:(id)a0 withLocation:(id)a1 withAltitude:(id)a2;
- (void)updateWaypoints:(id)a0;
- (id)waypointWithUUID:(id)a0;

@end
