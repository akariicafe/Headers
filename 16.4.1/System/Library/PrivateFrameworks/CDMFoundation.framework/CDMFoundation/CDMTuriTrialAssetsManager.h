@class NSArray, NSDictionary, NSLocale;

@interface CDMTuriTrialAssetsManager : NSObject {
    NSArray *_triClientManagers;
    NSArray *_namespaces;
    NSDictionary *_namespaceToTRIClientManager;
    NSDictionary *_namespaceToFactors;
    NSDictionary *_factorToNamespace;
}

@property (readonly, nonatomic) NSLocale *locale;

+ (id)convertToFactorToNamespace:(id)a0 withError:(id *)a1;
+ (id)generateNamespaceToTRIClientManagerMapping:(id)a0 withError:(id *)a1;
+ (id)getSiriUnderstandingTRIClientManager;

- (void).cxx_destruct;
- (void)setupWithError:(id *)a0;
- (id)getTrialClient:(id)a0;
- (BOOL)setAssetsProvisionalForFactors:(id)a0;
- (BOOL)areFactorsValid:(id)a0;
- (id)filterFactors:(id)a0 forNamespace:(id)a1;
- (id)filterFactors:(id)a0 forNamespaces:(id)a1;
- (id)generateNamespaceToFactorsMapping:(id)a0;
- (id)getFactorNamesInNamespace:(id)a0;
- (id)getNamespacesForFactors:(id)a0;
- (id)getTrialAssetForFactor:(id)a0 inNamespace:(id)a1 forLocale:(id)a2;
- (id)getTrialAssetsForTrialFactors:(id)a0;
- (id)initWithLocale:(id)a0 withTRIClientManagers:(id)a1;
- (BOOL)isTrialAssetValid:(id)a0 forLocale:(id)a1;
- (BOOL)isTrialAssetValidForSystemLocale:(id)a0;
- (BOOL)promoteAssetsForFactors:(id)a0 withFailedFactors:(id)a1;
- (BOOL)promoteAssetsForNamespaces:(id)a0;
- (void)registerForFactors:(id)a0 inNamespace:(id)a1 withAssetsDelegate:(id)a2;
- (BOOL)registerForFactors:(id)a0 withAssetsDelegate:(id)a1;
- (BOOL)setAssetsProvisionalForNamespaces:(id)a0;

@end
