@class FPDProviderDescriptor, NSString, NSArray, NSURL, NSSet, FPDExtension, FPDServer, FPDExtensionManager, NSObject, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FPDProvider : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
}

@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue;
@property (readonly, nonatomic) FPDProviderDescriptor *descriptor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *purposeIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *extensionStorageURLs;
@property (readonly, nonatomic) BOOL supportsEnumeration;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL supportsFPFS;
@property (readonly, nonatomic) BOOL isAppExtensionReachable;
@property (readonly, nonatomic) FPDExtension *asAppExtensionBackedProvider;
@property (copy, nonatomic) NSSet *blockedProcessNames;
@property (readonly, nonatomic) NSURL *supportURL;
@property (readonly, nonatomic) NSURL *domainsPlistURL;
@property (readonly, nonatomic) NSURL *providerPlistURL;
@property (readonly, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDExtensionManager *manager;
@property (readonly, nonatomic) NSDictionary *relevantDomainsByID;
@property (readonly, nonatomic) NSDictionary *nsDomainsByID;
@property (readonly, nonatomic) BOOL shouldHideDomainDisplayName;
@property (readonly, nonatomic) NSMutableDictionary *domainsByID;
@property (readonly, nonatomic) NSArray *providedItemsURLs;

+ (id)fpfsDomainXattrForURL:(id)a0;
+ (id)onDiskProvidersForServer:(id)a0;
+ (void)_garbageCollectFoldersWithNoRelatedDomain:(id)a0 supportDir:(id)a1;

- (id)description;
- (void)invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (id)domainForURL:(id)a0;
- (id)domainForIdentifier:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (id)initWithDescriptor:(id)a0 server:(id)a1;
- (void)importDomainsFromDiskAndUpdatePList:(BOOL)a0;
- (void)setEjectable:(BOOL)a0 forDomainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)reloadDomain:(id)a0 unableToStartup:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_startOrClearDomain:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsFPFS;
- (id)domainForRealPathURL:(id)a0;
- (void)_writeDomainProperties;
- (void)_writeDomainPropertiesIfChangedFrom:(id)a0;
- (id)defaultNSDomain;
- (id)newDomainFromNSDomain:(id)a0;
- (id)_recreateDefaultDomainIfNeeded;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 unableToStartup:(BOOL)a2 reloadDomain:(BOOL)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (void)_createSymlinkForDomain:(id)a0;
- (void)setEnabled:(BOOL)a0 forDomainIdentifier:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)dumpValue:(id)a0 forKey:(id)a1 to:(id)a2;
- (id)providerDomainForDomain:(id)a0;
- (void)writeDomainProperties;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeAllDomainsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDomain:(id)a0 mode:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableAllDomainsIfNoUserElection;
- (void)setDomainUserInfo:(id)a0 forDomainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)dumpStateTo:(id)a0 providerFilter:(id)a1 limitNumberOfItems:(BOOL)a2;

@end
