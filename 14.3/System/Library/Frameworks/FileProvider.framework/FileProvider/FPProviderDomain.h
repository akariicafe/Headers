@class NSError, NSString, NSArray, NSURL, FPItemCollection, NSProgress, NSFileProviderManager, NSFileProviderDomain;

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying> {
    FPItemCollection *_itemCollection;
    BOOL _keepLocalStorageUpToDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSFileProviderManager *manager;
@property (retain, nonatomic) NSString *providerDisplayName;
@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isEjectable) BOOL ejectable;
@property (retain, nonatomic) NSArray *supportedSearchFilters;
@property (nonatomic) BOOL needsAuthentication;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (retain, nonatomic) NSArray *supportedFileTypes;
@property (retain, nonatomic) NSString *purposeIdentifier;
@property (retain, nonatomic) NSArray *storageURLs;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier;
@property (nonatomic) BOOL shouldHideExtensionName;
@property (nonatomic) BOOL shouldHideDomainDisplayName;
@property (nonatomic) BOOL canDisable;
@property (nonatomic) BOOL supportsEnumeration;
@property (nonatomic) BOOL isAvailableSystemWide;
@property (nonatomic) BOOL supportsPickingFolders;
@property (nonatomic) BOOL isConnectedToAppExtension;
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;
@property (readonly) NSString *spotlightMountPoint;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *domainDisplayName;
@property (readonly, nonatomic) NSString *domainFullDisplayName;
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSString *containingBundleIdentifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) BOOL canDisconnect;
@property (readonly, nonatomic) BOOL containsPhotos;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isiCloudDriveProvider;
@property (readonly, nonatomic) BOOL isMainiCloudDriveDomain;

+ (void)fetchProviderDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
+ (id)beginMonitoringProviderDomainChangesWithHandler:(id /* block */)a0;
+ (void)endMonitoringProviderDomainChanges:(id)a0;
+ (void)fetchProviderDomainForItem:(id)a0 completionHandler:(id /* block */)a1;
+ (id)providerDomainWithID:(id)a0 error:(id *)a1;
+ (id)providerDomainForURL:(id)a0 error:(id *)a1;
+ (id)providerDomainsWithError:(id *)a0;
+ (id)providerDomainForItem:(id)a0 error:(id *)a1;

- (id)init;
- (id)storageURL;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)providerIdentifier;
- (id)localizedName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)localizedTitleForSortDescriptor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)bundleURL;
- (id)initWithProviderID:(id)a0 domain:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
