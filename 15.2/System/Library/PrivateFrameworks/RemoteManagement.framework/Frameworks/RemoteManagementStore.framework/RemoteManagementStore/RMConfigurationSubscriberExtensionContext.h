@class NSString;

@interface RMConfigurationSubscriberExtensionContext : NSExtensionContext <RMStoreConfigurationSubscriberExtensionHostContext, RMStoreConfigurationSubscriberExtensionVendorContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_plistClasses;
+ (id)_plistAndErrorClasses;

- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)a0;

@end
