@class NSArray, HMHome, NAFuture;

@interface HFRedesignMigrationController : NSObject

@property (readonly, nonatomic) NSArray *legacyFavoriteTiles;
@property (retain, nonatomic) NAFuture *migrationFuture;
@property (readonly, nonatomic) HMHome *home;

+ (BOOL)homeNeedsMigration:(id)a0;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)performMigrationIfNeeded;
- (id)_clearHomeDashboardSectionOrder;
- (BOOL)_accessoryLikeItemIsHighValue:(id)a0;
- (BOOL)_accessoryLikeObjectMustUseLargerSize:(id)a0;
- (double)_computeUsageThreshold:(id)a0;
- (id)_migrateFavorites;
- (id)_migrateRoomOrder;
- (id)_migrateServiceItemsOrderInRooms;
- (id)_migrateShowOnHomeDashboard;
- (id)_migrateTileSize;
- (void)_reduceScoreForRepeatingPattern:(id)a0 accessoryScores:(id)a1;
- (id)_sortAccessoriesInRoom:(id)a0 fromScoreMap:(id)a1;
- (void)_updateScoreForAccessoriesInGroup:(id)a0 accessoryScores:(id)a1 incrementBy:(long long)a2 singleAccessoryIncrement:(long long)a3;
- (void)performMigrationSuccessTasks;

@end
