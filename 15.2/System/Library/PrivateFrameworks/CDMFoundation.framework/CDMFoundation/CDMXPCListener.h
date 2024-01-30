@class NSString, NSXPCListener;

@interface CDMXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupWithCallback:(id /* block */)a0;

@end
