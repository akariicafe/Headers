@class NSXPCConnection, NSError, UIView, NSXPCListenerEndpoint, NSUUID, _EXRemoteViewController, _EXExtensionProcessHandle, _EXHostViewControllerConfiguration, NSObject, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_os_activity, _EXHostSessionDelegate;

@interface _EXHostSession : NSObject <NSXPCListenerDelegate, _EXExtensionProcessObserver>

@property (readonly) BOOL requiresSceneHosting;
@property (retain) NSXPCConnection *sceneSessionConnection;
@property (retain) NSXPCListener *hostListener;
@property (weak) UIView *hostView;
@property unsigned long long signpost;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property struct { struct os_activity_scope_state_s { unsigned long long opaque[2]; } state; NSObject<OS_os_activity> *osActivity; } activity;
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long maxState;
@property (retain) NSError *error;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint;
@property (readonly) NSUUID *uuid;
@property (readonly, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<_EXHostSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)dealloc;
- (void)processDidInvalidate:(id)a0;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)requestRemoteViewController;
- (void)_internalQueue_prepareToHost;
- (void)_invalidateSession;
- (void)makeSceneHostViewController;

@end
