@class NSString, NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {
    NSString *_serviceName;
    NSXPCListener *_xpcListener;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ performCommandBlock;
@property (copy, nonatomic) id /* block */ copyPropertyBlock;
@property (copy, nonatomic) id /* block */ setPropertyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_connectionInvalidated:(id)a0;
- (void)invalidate;
- (void)performCommand:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)postEvent:(id)a0 qualifier:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)getProperty:(id)a0 qualifier:(id)a1 completion:(id /* block */)a2;
- (void)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2 completion:(id /* block */)a3;
- (void)startWithXPCName:(id)a0;

@end
