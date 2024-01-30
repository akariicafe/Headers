@class NSString, TRIServerContext, NSXPCInterface;
@protocol TRITaskQueuing;

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_interface;
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> _taskQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1;

@end
