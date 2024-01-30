@class NSString, CSSearchableIndex, VCDaemonXPCEventHandler, NSMutableSet, VCSpotlightSyncOperation, NSObject, WFDebouncer, WFDatabaseResult;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>

@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCSpotlightSyncOperation *syncOperation;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *queuedModified;
@property (retain, nonatomic) NSMutableSet *queuedInserted;
@property (retain, nonatomic) NSMutableSet *queuedRemoved;
@property (readonly, nonatomic) WFDatabaseResult *workflows;
@property (nonatomic) BOOL isFetchingClientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync;
- (void)requestSync;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)dealloc;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)syncWithModifiedObjects:(id)a0 inserted:(id)a1 removed:(id)a2;
- (void)syncOperationFinishedWithRequestToRelaunch:(BOOL)a0;
- (void)start;
- (void).cxx_destruct;

@end
