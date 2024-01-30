@class NSXPCListener, NSString, NSDictionary, SBSRemoteAlertHandle, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, SFProxCardXPCClientInterface, OS_dispatch_source;

@interface SFProxCardSessionClient : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, SFProxCardXPCClientInterface> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _dismissCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_dispatch_source> *_xpcCheckinTimer;
    NSXPCConnection *_xpcCnx;
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) id<SFProxCardXPCClientInterface> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSString *viewServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_reportError:(id)a0;
- (void)_invalidated;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_xpcConnectionInvalidated:(id)a0;
- (void)_invalidate;
- (void)xpcPerformAction:(int)a0 completion:(id /* block */)a1;
- (void)_xpcCheckinTimerFired;
- (void)xpcCheckinWithCompletion:(id /* block */)a0;
- (void)invalidate;

@end
