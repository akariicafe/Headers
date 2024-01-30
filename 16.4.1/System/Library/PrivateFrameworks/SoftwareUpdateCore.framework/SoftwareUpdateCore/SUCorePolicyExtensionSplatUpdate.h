@class NSString;

@interface SUCorePolicyExtensionSplatUpdate : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *installedSplatRestoreVersion;
@property (retain, nonatomic) NSString *installedSplatBuildVersion;
@property (retain, nonatomic) NSString *installedSplatProductVersion;
@property (retain, nonatomic) NSString *installedSplatProductVersionExtra;
@property (retain, nonatomic) NSString *installedSplatReleaseType;
@property (retain, nonatomic) NSString *installedBaseOSRestoreVersion;
@property (retain, nonatomic) NSString *installedBaseOSBuildVersion;
@property (retain, nonatomic) NSString *installedBaseOSProductVersion;
@property (retain, nonatomic) NSString *installedBaseOSReleaseType;
@property (retain, nonatomic) NSString *requestedSplatRestoreVersion;
@property (nonatomic) BOOL allowSameRestoreVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)extensionName;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (id)_stringRemovingParenthesis:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (BOOL)isSplatPolicy;

@end
