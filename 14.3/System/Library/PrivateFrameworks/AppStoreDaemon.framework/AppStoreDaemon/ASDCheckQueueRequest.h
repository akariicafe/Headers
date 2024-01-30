@class NSString, NSXPCConnection, NSObject, ASDCheckQueueRequestOptions;
@protocol OS_dispatch_queue;

@interface ASDCheckQueueRequest : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDCheckQueueRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)_makeAutomaticQueueRequestWithCompletionBlock:(id /* block */)a0;
- (void)_makeRequestWithCompletionBlock:(id /* block */)a0;
- (void)_sendRequestWithCompletionBlock:(id /* block */)a0;
- (void)checkAutomaticCheckWithCompletionBlock:(id /* block */)a0;
- (void)checkPendingCheckWithCompletionBlock:(id /* block */)a0;
- (void)sendRequestCompletionBlock:(id /* block */)a0;
- (void)_setupConnection;

@end
