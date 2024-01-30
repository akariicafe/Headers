@class VCDaemonXPCEventHandler, BPSSink, CSSearchableIndex, VCDaemonDatabaseProvider, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface WFContextualActionSpotlightSyncService : NSObject <WFDatabaseObjectObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) BPSSink *focusModeSink;
@property (readonly, nonatomic) CSSearchableIndex *index;

- (void)subscribeToBiome;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)receiveAutoShortcutsUpdatedNotification:(id)a0;
- (id)initWithEventHandler:(id)a0 databaseProvider:(id)a1;
- (void)dealloc;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)queue_getAppShortcutContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)reindexAllSearchableItems;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)a0 identifier:(id)a1 fetcher:(id /* block */)a2 completionBlock:(id /* block */)a3;

@end
