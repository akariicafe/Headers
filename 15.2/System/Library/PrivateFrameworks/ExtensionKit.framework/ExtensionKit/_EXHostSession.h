@class NSUUID, NSError, NSXPCListenerEndpoint, _EXHostViewControllerConfiguration, _EXExtensionProcess, _EXRemoteViewController, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_activity, _EXHostSessionDelegate;

@interface _EXHostSession : NSObject <_EXExtensionProcessObserver>

@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) _EXExtensionProcess *extensionProcess;
@property struct { struct os_activity_scope_state_s { unsigned long long opaque[2]; } state; NSObject<OS_os_activity> *osActivity; } activity;
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController;
@property (nonatomic) unsigned long long state;
@property (retain) NSError *error;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint;
@property (readonly) NSUUID *uuid;
@property (readonly, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (nonatomic) id<_EXHostSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestRemoteViewController;
- (void)_internalQueue_prepareToHostExtension:(id)a0 sceneIdenitifer:(id)a1;
- (void)processDidInvalidate:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;

@end
