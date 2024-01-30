@class NSString;

@interface DDRemoteActionViewServiceContext : NSExtensionContext <DDRemoteActionViewServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)enableUserInteraction:(BOOL)a0;
- (void)prepareViewControllerWithCompletionHandler:(id /* block */)a0;

@end
