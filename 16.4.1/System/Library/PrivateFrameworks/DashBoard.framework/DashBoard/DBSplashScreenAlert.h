@class NSXPCListener, NSString, SBSRemoteAlertHandle, NSXPCConnection;

@interface DBSplashScreenAlert : NSObject <DBSplashScreenDismissalServer, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, BSInvalidatable>

@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_showAlertIfNecessary;

@end
