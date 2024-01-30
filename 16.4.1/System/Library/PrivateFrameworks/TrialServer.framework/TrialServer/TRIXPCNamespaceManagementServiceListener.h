@class NSString, TRIXPCServerContextPromise, NSXPCInterface, TRIServerContext;
@protocol TRITaskQueuing;

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_interface;
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> _taskQueue;
    TRIXPCServerContextPromise *_promise;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContextPromise:(id)a0;
- (void).cxx_destruct;

@end
