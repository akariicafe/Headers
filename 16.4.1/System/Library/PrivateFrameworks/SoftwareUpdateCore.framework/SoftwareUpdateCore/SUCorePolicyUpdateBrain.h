@class NSNumber;

@interface SUCorePolicyUpdateBrain : SUCorePolicy

@property (retain, nonatomic) NSNumber *compatibilityVersion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)selectSoftwareUpdatePrimaryAsset:(id *)a0 secondaryAsset:(id *)a1 fromAssetQuery:(id)a2;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)a0;
- (id)initWithSoftwareUpdateAssetType:(id)a0 documentationAssetType:(id)a1 usingExtensions:(id)a2;
- (id)initWithSoftwareUpdateAssetType:(id)a0 documentationAssetType:(id)a1 usingPolicies:(long long)a2 usingExtensions:(id)a3;

@end
