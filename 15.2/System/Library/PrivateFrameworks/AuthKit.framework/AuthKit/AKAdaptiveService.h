@class NSString, NSXPCListener, NSXPCInterface;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCListener *_listener;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listenerEndpoint;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)_initWithInterface:(id)a0 object:(id)a1;
- (id)initWithInterface:(id)a0 strongObject:(id)a1;
- (id)initWithInterface:(id)a0 weakObject:(id)a1;
- (void)resume;
- (void)dealloc;

@end
