@class NSXPCListener, NSString, NSMutableDictionary, NSXPCConnection;
@protocol _EXExtensionViewControllerFactory;

@interface _EXRunningUIExtension : _EXRunningExtension <_UIViewServiceSessionManagerDelegate, NSXPCListenerDelegate, _EXInternalExtensionXPCProtocol, _EXExtensionSceneProviding, _EXExtensionViewControllerFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) NSMutableDictionary *sessions;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSXPCListener *internalListener;
@property (retain) id<_EXExtensionViewControllerFactory> viewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionForIdentifier:(id)a0;
- (id)scenes;
- (id)configurationForSceneNamed:(id)a0;
- (id)makeViewControllerWithSceneConfiguration:(id)a0;
- (void)requestHostUserInterfaceSessionForSession:(id)a0 reply:(id /* block */)a1;
- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addSession:(id)a0;
- (void)viewServiceSessionManager:(id)a0 didCreateViewController:(id)a1 contextToken:(id)a2;
- (BOOL)requiresExtensionContextForViewServiceSessionManager:(id)a0;
- (id)viewControllerClassNameForViewServiceSessionManager:(id)a0;
- (id)containingViewControllerClassNameForViewServiceSessionManager:(id)a0;
- (id)mainStoryboardNameForViewServiceSessionManager:(id)a0;
- (BOOL)isExtensionViewServiceSessionManager:(id)a0;

@end
