@class NSXPCConnection, NSString, HDXPCProcess, _HKEntitlements, HDClientAuthorizationOracle, HDProfile, HDXPCClient, HKHealthStoreConfiguration;

@interface HDHealthStoreClient : NSObject

@property (readonly) HDXPCClient *XPCClient;
@property (readonly) HDProfile *profile;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle;
@property (readonly) NSXPCConnection *connection;
@property (readonly) HDXPCProcess *process;
@property (readonly, copy) HKHealthStoreConfiguration *configuration;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *sourceVersion;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier;

- (BOOL)hasRequiredArrayEntitlement:(id)a0 containing:(id)a1 error:(id *)a2;
- (BOOL)hasRequiredEntitlement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasArrayEntitlement:(id)a0 containing:(id)a1;
- (BOOL)verifyHealthRecordsPermissionGrantedWithError:(id *)a0;
- (id)filterWithQueryFilter:(id)a0 objectType:(id)a1;
- (BOOL)hasPrivateMetadataAccess;
- (BOOL)hasEntitlement:(id)a0;
- (id)initWithXPCClient:(id)a0 configuration:(id)a1 profile:(id)a2;
- (BOOL)shouldBypassAuthorization;
- (id)baseDataEntityEncodingOptions;
- (id)_watchKitAvailabilityFilterForSampleType:(id)a0;

@end
