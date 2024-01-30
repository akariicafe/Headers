@class FPDProviderDescriptor, NSString, NSArray, NSURL, NSSet, FPDExtension, FPDServer, FPDExtensionManager, NSObject, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FPDProvider : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
}

@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) FPDProviderDescriptor *descriptor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *purposeIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *extensionStorageURLs;
@property (readonly, nonatomic) BOOL supportsEnumeration;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL supportsFPFS;
@property (readonly, nonatomic, getter=isDisabledByFPFSSettings) BOOL disabledByFPFSSettings;
@property (readonly, nonatomic) BOOL isAppExtensionReachable;
@property (readonly, nonatomic) FPDExtension *asAppExtensionBackedProvider;
@property (retain, nonatomic) NSSet *blacklistedProcessNames;
@property (readonly, nonatomic) NSURL *supportURL;
@property (readonly, nonatomic) NSURL *domainsPlistURL;
@property (readonly, nonatomic) NSURL *providerPlistURL;
@property (readonly, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDExtensionManager *manager;
@property (readonly, nonatomic) FPDProvider *providerIfNotDisabledByFPFSSettings;
@property (readonly, nonatomic) NSDictionary *relevantDomainsByID;
@property (readonly, nonatomic) NSDictionary *nsDomainsByID;
@property (readonly, nonatomic) NSMutableDictionary *domainsByID;
@property (readonly, nonatomic) NSArray *providedItemsURLs;

- (void).cxx_destruct;
- (id)domainForIdentifier:(id)a0;
- (id)description;
- (void)startWithCompletion:(id /* block */)a0;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1;
- (id)domainForURL:(id)a0;
- (void)invalidate;
- (id)initWithDescriptor:(id)a0 server:(id)a1;
- (void)importDomainsFromDisk;
- (void)setEjectable:(BOOL)a0 forDomainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)providerDomainForNSDomain:(id)a0;
- (void)reloadDomain:(id)a0 unableToStartup:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)writeDomainProperties;
- (void)_startOrClearDomain:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsFPFS;
- (void)_writeDomainProperties;
- (void)_writeDomainPropertiesIfChangedFrom:(id)a0;
- (id)defaultNSDomain;
- (id)newDomainFromNSDomain:(id)a0;
- (void)_markDomainIfIndexShouldBeDropped:(id)a0;
- (id)_recreateDefaultDomainIfNeeded;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 unableToStartup:(BOOL)a2 reloadDomain:(BOOL)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (void)_createSymlinkForDomain:(id)a0;
- (void)setEnabled:(BOOL)a0 forDomainIdentifier:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)dumpValue:(id)a0 forKey:(id)a1 to:(id)a2;
- (void)addDomain:(id)a0 byImportingDirectoryAtURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeAllDomainsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDomain:(id)a0 options:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableAllDomainsIfNoUserElection;

@end
