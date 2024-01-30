@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supervised;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (nonatomic) long long delayPeriodSecs;
@property (nonatomic) unsigned long long mdmSoftwareUpdatePath;

+ (id)nameForMDMSoftwareUpdatePath:(unsigned long long)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)requestedProductMarketingVersion;
- (id)description;
- (BOOL)isSupervisedPolicy;
- (long long)delayPeriodDays;
- (id)extensionName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRequestedPMVSupervisedPolicy;
- (id)mdmPathName;
- (void)extendSoftwareUpdateMAAssetQuery:(id)a0;
- (void)extendDocumentationMAAssetQuery:(id)a0;
- (id)filterSoftwareUpdateAssetArray:(id)a0;
- (id)filterDocumentationAssetArray:(id)a0;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)a0;
- (void)extendMADocumentationCatalogDownloadOptions:(id)a0 descriptor:(id)a1;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)a0;
- (void)extendMADocumentationAssetDownloadOptions:(id)a0;
- (void)extendMSUApplyOptions:(id)a0;
- (id)_filterAssetArray:(id)a0;

@end
