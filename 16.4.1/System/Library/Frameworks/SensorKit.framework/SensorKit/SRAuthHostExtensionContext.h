@class NSString;

@interface SRAuthHostExtensionContext : NSExtensionContext <SRAuthHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteProxy;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
