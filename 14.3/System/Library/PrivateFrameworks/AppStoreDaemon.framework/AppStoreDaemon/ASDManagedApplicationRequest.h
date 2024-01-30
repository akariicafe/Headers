@class NSString, NSXPCConnection, NSObject, ASDManagedApplicationRequestOptions;
@protocol OS_dispatch_queue;

@interface ASDManagedApplicationRequest : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDManagedApplicationRequestOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)sendRequestWithCompletionBlock:(id /* block */)a0;
- (void)_sendRequestCompletionWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)_setupConnection;

@end
