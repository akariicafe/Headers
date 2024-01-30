@class NSFileProviderDomainVersion, FPXExtensionContext, NSFileProviderExtension, NSDictionary, FPProviderDomain, NSObject, FPSpotlightIndexer, NSFileProviderDomain;
@protocol OS_os_log, NSFileProviderReplicatedExtension;

@interface FPXDomainContext : NSObject {
    NSFileProviderDomainVersion *_lastKnownDomainVersion;
    NSDictionary *_lastKnownUserInfo;
    long long _sequenceNumber;
    int _selfPid;
}

@property (readonly, weak, nonatomic) FPXExtensionContext *extensionContext;
@property (readonly, nonatomic) NSObject<NSFileProviderReplicatedExtension> *vendorInstance;
@property (readonly, nonatomic) NSFileProviderExtension *v2Instance;
@property (readonly, nonatomic) NSFileProviderDomain *domain;
@property (readonly, nonatomic) FPProviderDomain *providerDomain;
@property (readonly, nonatomic) BOOL usesFPFS;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) FPSpotlightIndexer *spotlightIndexer;
@property (readonly, nonatomic) unsigned long long extensionCapabilities;

- (id)currentResponseWithRequest:(id)a0;
- (id)itemIDFromVendorItemID:(id)a0;
- (id)internalErrorFromVendorError:(id)a0 callerDescription:(id)a1;
- (void)prepareForDomainRemovalWithCompletionHandler:(id /* block */)a0;
- (id)instanceWithPrivateSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)itemsFromVendorItems:(id)a0;
- (id)itemIDsFromVendorItemIDs:(id)a0;
- (void)updateCapabilities;
- (void)invalidate;
- (BOOL)shouldIngestDomainUserInfoUpdateWithOldVersion:(id)a0 newVersion:(id)a1;
- (void)retrieveUserInfoFromExtension;
- (id)initWithVendorInstance:(id)a0 domain:(id)a1 extensionContext:(id)a2 providerDomain:(id)a3 domainVersion:(id)a4;
- (id)itemFromVendorItem:(id)a0;

@end
