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

- (void)prepareForDomainRemovalWithCompletionHandler:(id /* block */)a0;
- (void)updateCapabilities;
- (BOOL)shouldIngestDomainUserInfoUpdateWithOldVersion:(id)a0 newVersion:(id)a1;
- (id)itemsFromVendorItems:(id)a0;
- (id)itemIDFromVendorItemID:(id)a0;
- (id)initWithVendorInstance:(id)a0 domain:(id)a1 extensionContext:(id)a2 providerDomain:(id)a3 domainVersion:(id)a4;
- (void)retrieveUserInfoFromExtension;
- (void)invalidate;
- (id)internalErrorFromVendorError:(id)a0 callerDescription:(id)a1;
- (id)itemIDsFromVendorItemIDs:(id)a0;
- (id)instanceWithPrivateSelector:(SEL)a0;
- (id)currentResponseWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)itemFromVendorItem:(id)a0;

@end
