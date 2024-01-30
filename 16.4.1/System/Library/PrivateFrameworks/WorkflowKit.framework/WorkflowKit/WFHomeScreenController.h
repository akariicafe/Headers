@class WFDatabase, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WFHomeScreenController : NSObject <WFDatabaseObjectObserver>

@property (class, readonly, nonatomic) WFHomeScreenController *sharedInstance;

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *homeScreenShortcutIDs;

+ (void)migrateWebClipsIfNeededWithDatabaseAccessor:(id /* block */)a0;
+ (id)launchImageForIcon:(id)a0 inLandscape:(BOOL)a1;
+ (void)migratePreYukonWebClipsIfNeeded;
+ (void)drawIcon:(id)a0 maxSize:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)iconImageForIcon:(id)a0;
+ (void)migrateOpenAppWebClipsIfNeededWithDatabaseAccessor:(id /* block */)a0;

- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addWorkflowToHomeScreen:(id)a0 withName:(id)a1 icon:(id)a2 error:(id *)a3;
- (void)getHomeScreenShortcutIDsWithCompletionHandler:(id /* block */)a0;
- (void)startListeningForDatabaseChanges;
- (void)updateWebClipIfNeeded:(id)a0;

@end
