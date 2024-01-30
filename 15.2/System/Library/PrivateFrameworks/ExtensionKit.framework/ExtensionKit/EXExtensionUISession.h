@class NSXPCListener, NSString, _EXExtensionRootViewController, _EXRunningUIExtension, _EXExtensionViewController;

@interface EXExtensionUISession : EXUISession <NSXPCListenerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) _EXRunningUIExtension *extension;
@property BOOL connectionAccepted;
@property (retain) NSXPCListener *listener;
@property (retain) _EXExtensionRootViewController *viewController;
@property (readonly) _EXExtensionViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeExtensionViewController;
- (id)initWithIdentifier:(id)a0 extension:(id)a1 sceneIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)suspend;
- (void)resume;

@end
