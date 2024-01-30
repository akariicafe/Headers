@class NSString;

@interface RMExtensionContext : NSExtensionContext <RMExtensionHostContext, RMExtensionVendorContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_plistClasses;
+ (id)_plistAndErrorClasses;

- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)a0;
- (void)queryForStatusWithKeyPaths:(id)a0 onBehalfOfManagementChannel:(id)a1 completionHandler:(id /* block */)a2;

@end
