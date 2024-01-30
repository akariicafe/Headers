@class WFDatabase;
@protocol WFUserInterfaceHost;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver>

@property (readonly, nonatomic) WFDatabase *database;
@property (retain, nonatomic) id<WFUserInterfaceHost> userInterface;

+ (id)defaultManager;
+ (void)setDefaultManager:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDatabase:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)presentResumeSyncConfirmationAlertWithContinueSyncingBlock:(id /* block */)a0 cancelSyncingBlock:(id /* block */)a1;
- (void)handleZoneWasPurgedError;

@end
