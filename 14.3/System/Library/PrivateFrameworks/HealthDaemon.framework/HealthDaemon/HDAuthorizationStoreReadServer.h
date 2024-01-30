@class NSString;

@interface HDAuthorizationStoreReadServer : HDStandardTaskServer <HKAuthorizationStoreReadServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchAuthorizationRecordsForType:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAuthorizationRecordsForSourceBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSourcesRequestingAuthorizationForTypes:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAuthorizationStatusesForDocumentType:(id)a0 sourceBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)remote_fetchAuthorizationStatusesForSampleUUID:(id)a0 completion:(id /* block */)a1;

@end
