@class NSString, NSURL, NSArray;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *extensionPointVersion;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL enabledByDefault;
@property (nonatomic) BOOL supportsEnumeration;
@property (nonatomic) BOOL defaultDomainVisible;
@property (nonatomic) BOOL shouldHideExtensionName;
@property (nonatomic) BOOL canToggleDomainVisibility;
@property (nonatomic) BOOL isAvailableSystemWide;
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic) BOOL supportsUnzippedPackages;
@property (nonatomic) BOOL hasExplicitExtensionStorageURLs;
@property (nonatomic) BOOL supportsPickingFolders;
@property (nonatomic) BOOL owningApplicationIsManaged;
@property (retain, nonatomic) NSString *purposeIdentifier;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (retain, nonatomic) NSArray *supportedFileTypes;
@property (retain, nonatomic) NSArray *supportedSearchFilters;
@property (retain, nonatomic) NSArray *extensionStorageURLs;
@property (retain, nonatomic) NSArray *requestedExtendedAttributes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithExtension:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
