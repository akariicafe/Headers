@class NSArray, NSDictionary, TRIClient, NSLocale;

@interface CDMTuriTrialAssetsManager : NSObject {
    TRIClient *_nlTRIClient;
    NSArray *_namespaces;
    NSDictionary *_namespaceToFactors;
    NSDictionary *_factorToNamespace;
}

@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 forNamespaces:(id)a1;
- (id)getAbsolutePathForServiceTrialFactor:(id)a0;
- (BOOL)registerForFactors:(id)a0 withAssetsDelegate:(id)a1;
- (BOOL)setAssetsProvisionalForFactors:(id)a0;
- (BOOL)promoteAssetsForFactors:(id)a0 withFailedFactors:(id)a1;
- (void)initTRIClient;
- (id)generateNamespaceToFactorsMapping:(id)a0;
- (id)convertToFactorToNamespace:(id)a0;
- (void)fetchCompatibilityVersion;
- (void)fetchRolloutStatus;
- (void)fetchRolloutStatusForNamespace:(id)a0;
- (void)fetchCompatibilityVersionForNamespace:(id)a0;
- (BOOL)isTrialAssetValid:(id)a0;
- (id)getDirectoryFactorPath:(id)a0 inNamespace:(id)a1;
- (BOOL)isTrialAssetValidForSystemLocale:(id)a0;
- (id)getFactorNamesInNamespace:(id)a0;
- (id)filterFactors:(id)a0 forNamespace:(id)a1;
- (id)filterFactors:(id)a0 forNamespaces:(id)a1;
- (void)refreshTRIClient;
- (BOOL)areFactorsValid:(id)a0;
- (void)registerForFactors:(id)a0 inNamespace:(id)a1 withAssetsDelegate:(id)a2;
- (id)getNamespacesForFactors:(id)a0;
- (BOOL)setAssetsProvisionalForNamespaces:(id)a0;
- (BOOL)promoteAssetsForNamespaces:(id)a0;
- (id)initWithLocale:(id)a0 forNamespace:(id)a1;

@end
