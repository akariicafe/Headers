@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (void)queue_setShareSheetShortcutsPresent:(BOOL)a0;
- (void)queue_updateFromDatabase:(id)a0;
- (void)startIfPossible;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)queue_startIfPossible;

@end
