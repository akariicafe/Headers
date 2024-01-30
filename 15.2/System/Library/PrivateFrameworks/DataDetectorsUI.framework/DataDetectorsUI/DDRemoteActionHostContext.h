@class NSString;

@interface DDRemoteActionHostContext : NSExtensionContext <DDRemoteActionHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)protocolService;
- (void)enableUserInteraction:(BOOL)a0;
- (void)prepareViewControllerWithCompletionHandler:(id /* block */)a0;

@end
