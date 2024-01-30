@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *compatibilityVersion;

- (id)summary;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)extensionName;
- (void)encodeWithCoder:(id)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;

@end
