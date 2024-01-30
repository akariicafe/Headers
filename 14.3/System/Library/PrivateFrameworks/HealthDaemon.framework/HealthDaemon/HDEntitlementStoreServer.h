@class NSString;

@interface HDEntitlementStoreServer : HDStandardTaskServer <HKEntitlementStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)remote_fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)a0;
- (id)exportedInterface;

@end
