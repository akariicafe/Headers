@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSXPCInterface, NSMutableSet, NSObject, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
    NSMutableSet *_xpcCnxSet;
    NSXPCListener *_xpcListener;
}

@property (copy, nonatomic) id /* block */ connectionStartedHandler;
@property (copy, nonatomic) id /* block */ connectionEndedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxy;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_connectionInvalidated:(id)a0;
- (BOOL)activateDirectAndReturnError:(id *)a0;
- (void)_invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
