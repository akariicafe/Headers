@class NSString, SBSRemoteAlertHandle;
@protocol RemoteUIActivatorDelegate, LADaemonXPC;

@interface RemoteUIActivator : NSObject <SBSRemoteAlertHandleObserver, RemoteUIActivating>

@property (class, retain, nonatomic) id<LADaemonXPC> daemon;

@property (weak, nonatomic) SBSRemoteAlertHandle *activatingHandle;
@property (weak, nonatomic) SBSRemoteAlertHandle *activeHandle;
@property (nonatomic) BOOL remoteAlertWasInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (BOOL)invalidated;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)activateUIWithParams:(id)a0;

@end
