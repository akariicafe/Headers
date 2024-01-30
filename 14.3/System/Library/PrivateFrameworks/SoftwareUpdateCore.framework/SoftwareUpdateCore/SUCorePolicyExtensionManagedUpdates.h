@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supervised;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (nonatomic) long long delayPeriodSecs;

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
- (void)extendMSUApplyOptions:(id)a0;
- (BOOL)isSupervisedPolicy;
- (void)_extendMAAssetQuery:(id)a0;
- (id)_filterAssetArray:(id)a0;

@end
