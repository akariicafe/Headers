@class NSObject, NSXPCConnection, NSMutableArray, PARImageLoader;
@protocol OS_dispatch_queue;

@interface PARSearchClient : NSObject {
    NSMutableArray *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _configured;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) PARImageLoader *imageLoader;

+ (id)sharedClient;

- (void)bag:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)configure:(id)a0;
- (void)didDownloadResource:(id)a0;
- (void)_invalidateConnection;
- (void)addSession:(id)a0;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didDeleteResource:(id)a0;
- (void)clearCompletionsFromDate:(id)a0 toDate:(id)a1;
- (id)initWithConnection:(id)a0;
- (unsigned long long)request:(id)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)getImageMap:(id /* block */)a0;
- (void)bagDidLoad:(id)a0 error:(id)a1;
- (void)reportFeedback:(id)a0 feedback:(id)a1 queryId:(unsigned long long)a2;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (void)listSessions:(id /* block */)a0;
- (void)forceFetchBag:(id)a0 reply:(id /* block */)a1;

@end
