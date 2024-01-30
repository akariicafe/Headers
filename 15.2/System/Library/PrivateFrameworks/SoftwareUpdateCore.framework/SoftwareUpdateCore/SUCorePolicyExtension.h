@interface SUCorePolicyExtension : NSObject <NSSecureCoding, SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)extensionName;
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
