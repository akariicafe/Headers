@class NSString, TRIServerContext, NSXPCInterface;

@interface TRIXPCAllocationStatusServiceListener : NSObject <NSXPCListenerDelegate> {
    TRIServerContext *_serverContext;
    NSXPCInterface *_interface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContext:(id)a0;

@end
