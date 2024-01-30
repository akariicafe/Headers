@class NSString;

@interface HDAuthorizationStoreResetServer : HDStandardTaskServer <HKAuthorizationStoreResetServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_resetAuthorizationStatusesForObjects:(id)a0 completion:(id /* block */)a1;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)a0 objectType:(id)a1 completion:(id /* block */)a2;

@end
