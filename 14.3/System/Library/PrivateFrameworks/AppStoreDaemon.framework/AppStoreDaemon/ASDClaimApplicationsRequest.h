@class NSString, NSXPCConnection, NSObject, ASDClaimApplicationsRequestOptions;
@protocol OS_dispatch_queue;

@interface ASDClaimApplicationsRequest : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDClaimApplicationsRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)_sendRequestWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendRequestWithCompletionBlock:(id /* block */)a0;
- (void)_setupConnection;

@end
