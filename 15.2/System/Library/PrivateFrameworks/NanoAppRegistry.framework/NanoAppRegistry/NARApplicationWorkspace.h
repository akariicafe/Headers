@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NARApplicationWorkspace : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (id)init;
- (void)dealloc;
- (void)_loadConnectionIfNeeded;
- (void)getWorkspaceInfoWithCompletion:(id /* block */)a0;
- (id)_workspaceServiceWithErrorHandler:(id /* block */)a0;
- (void)getWorkspaceInfoIncludingHiddenApps:(BOOL)a0 completion:(id /* block */)a1;
- (id)workspaceInfo:(id *)a0;

@end
