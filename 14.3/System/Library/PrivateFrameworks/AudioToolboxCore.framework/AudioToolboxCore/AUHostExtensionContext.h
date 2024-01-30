@class NSXPCConnection, NSExtension, AUHostDelegate;

@interface AUHostExtensionContext : NSExtensionContext

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) AUHostDelegate *delegate;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
