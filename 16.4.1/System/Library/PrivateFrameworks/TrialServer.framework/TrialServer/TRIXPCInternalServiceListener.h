@class NSString, TRIXPCInternalServiceWrapper, NSXPCInterface;

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate> {
    TRIXPCInternalServiceWrapper *_wrapper;
    NSXPCInterface *_interface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithServerContextPromise:(id)a0;
- (void).cxx_destruct;

@end
