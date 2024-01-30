@class NSNumber;

@interface SUCorePolicyExtensionCompanionCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minCompatibility;
@property (retain, nonatomic) NSNumber *maxCompatibility;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)extensionName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;

@end
