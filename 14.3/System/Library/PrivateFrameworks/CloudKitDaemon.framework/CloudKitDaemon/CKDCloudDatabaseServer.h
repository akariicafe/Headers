@class NSXPCListener, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDCloudDatabaseServer : NSObject <UMUserSyncStakeholder>

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableArray *connectedClients;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource;
@property (retain, nonatomic) NSOperationQueue *clientTeardownQueue;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusReportRequestSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusReportCallbackQueue;
@property (retain, nonatomic) NSMutableArray *statusReportCallbacks;
@property (nonatomic) int tccToken;
@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (void)_dumpStatusReportArrayToOsTrace:(id)a0;
- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)kickOffPendingLongLivedOperations;
- (void)dealloc;
- (void)uploadContent;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dumpStatusReportToFileHandle:(id)a0;
- (void)resume;
- (void)statusReportWithCompletionHandler:(id /* block */)a0;
- (void)enumerateConnectedClients:(id /* block */)a0;
- (void)willSwitchUser;
- (void)_dumpStatusReportToFileHandle:(id)a0;

@end
