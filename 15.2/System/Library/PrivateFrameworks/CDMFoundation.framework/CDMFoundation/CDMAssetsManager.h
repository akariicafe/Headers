@class CDMDefaultAssetsManager, CDMTuriTrialAssetsManager, NSLocale;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager *_cdmTuriTrialAssetsManager;
}

@property (readonly, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)getAssetPathForTrialFactor:(id)a0 assetFolder:(id)a1 serviceName:(id)a2;
- (id)getTrialAssetPathForTrialFactor:(id)a0 assetFolder:(id)a1;
- (id)getAssetPathForService:(id)a0;
- (BOOL)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)a0;
- (BOOL)isAssetAvailableForService:(id)a0;
- (id)getFactorNamesForNonSkippableServices:(id)a0;
- (id)getAssetPathsForServices:(id)a0;
- (BOOL)areAssetsAvailableForServices:(id)a0;
- (BOOL)registerForServices:(id)a0 withAssetsDelegate:(id)a1;
- (BOOL)setAssetsProvisionalForServices:(id)a0;
- (BOOL)promoteAssetsForServices:(id)a0 withFailedServices:(id)a1;

@end
