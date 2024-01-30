@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NSPServerClient : NSObject <NSPServerCommands> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getConnection;
- (void).cxx_destruct;
- (void)fetchStateForClient:(id)a0 withPeerEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithCallbackQueue:(id)a0;
- (void)setCurrentLatitude:(double)a0 longitude:(double)a1 timestamp:(id)a2 forClient:(id)a3;
- (void)setEdgeSet:(id)a0 forIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppRule:(id)a0 forLabel:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAppRuleForLabel:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchCurrentConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)setCurrentConfiguration:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)establishTrustWithEdgeSetForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshWaldoNowWithCompletionHandler:(id /* block */)a0;
- (void)reportUsage:(id)a0 fromClient:(id)a1;
- (void)setTestLatencyMap:(id)a0 completionHandler:(id /* block */)a1;

@end
