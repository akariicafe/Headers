@class NSError, NSString, NSURL, NSArray, FPItemCollection, NSDictionary, NSProgress, NSFileProviderManager, NSFileProviderDomain;

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
@property (retain, nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic, getter=isUsingFPFS) BOOL useFPFS;
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
@property (nonatomic) unsigned long long disconnectionState;
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;
@property (readonly) NSString *spotlightMountPoint;
@property (nonatomic) BOOL allowsUserControlledEviction;
@property (nonatomic) BOOL allowsContextualMenuDownloadEntry;
@property (nonatomic) BOOL allowsSystemDeleteAlerts;
@property (nonatomic) BOOL appliesChangesAtomically;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *domainDisplayName;
@property (readonly, nonatomic) NSString *domainFullDisplayName;
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSString *containingBundleIdentifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) BOOL isConnectedToAppExtension;
@property (readonly, nonatomic) NSString *disconnectionReason;
@property (readonly, nonatomic) NSString *localizedDisconnectionBannerText;
@property (readonly, nonatomic) BOOL canDisconnect;
@property (readonly, nonatomic) unsigned long long testingModes;
@property (readonly, nonatomic) BOOL containsPhotos;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isiCloudDriveProvider;
@property (readonly, nonatomic) BOOL isMainiCloudDriveDomain;
@property (readonly, nonatomic) BOOL isEnterpriseDomain;
@property (readonly, nonatomic) BOOL isDataSeparatedDomain;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;

+ (void)removeDomainWithID:(id)a0 mode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (void)removeDomainAndPreserveDataWithID:(id)a0 mode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (id)providerDomainForURL:(id)a0 error:(id *)a1;
+ (id)providerDomainsWithError:(id *)a0;
+ (void)fetchProviderDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endMonitoringProviderDomainChanges:(id)a0;
+ (id)providerDomainWithID:(id)a0 error:(id *)a1;
+ (void)fetchProviderDomainForItem:(id)a0 completionHandler:(id /* block */)a1;
+ (id)providerDomainForItem:(id)a0 error:(id *)a1;
+ (id)beginMonitoringProviderDomainChangesWithHandler:(id /* block */)a0;
+ (void)_t_discardCache;

- (id)localizedName;
- (id)providerIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (id)localizedTitleForSortDescriptor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)bundleURL;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)storageURL;
- (unsigned long long)hash;
- (id)initWithProviderID:(id)a0 domain:(id)a1;

@end
