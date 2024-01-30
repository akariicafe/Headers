@class NSXPCConnection, NSExtension, AUHostDelegate;

@interface AUHostExtensionContext : NSExtensionContext

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) AUHostDelegate *delegate;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)a0;
- (void)dealloc;

@end
