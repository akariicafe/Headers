@class VCDaemonXPCEventHandler, VCSpotlightSyncOperation, WFDebouncer, CSSearchableIndex, WFDatabaseResult, NSObject, NSString;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>

@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCSpotlightSyncOperation *syncOperation;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFDatabaseResult *workflows;
@property (nonatomic) BOOL isFetchingClientState;
@property (nonatomic) BOOL hasAddedXPCEventHandlerObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)requestSync;
- (void)syncWithModifiedObjects:(id)a0 inserted:(id)a1 removed:(id)a2;
- (void)start;
- (void)syncOperationFinishedWithRequestToRelaunch:(BOOL)a0;

@end
