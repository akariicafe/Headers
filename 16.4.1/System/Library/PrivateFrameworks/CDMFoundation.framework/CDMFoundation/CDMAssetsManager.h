@class CDMTuriTrialAssetsManager, NSString, CDMDefaultAssetsManager, NSFileManager, NSLocale;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMTuriTrialAssetsManager *_cdmTuriTrialAssetsManager;
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *assetDirPath;

+ (id)getFactorNamesForService:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)setupWithError:(id *)a0;
- (BOOL)areAssetsAvailableForServices:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2;
- (BOOL)areAssetsAvailableForServices:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2 selfMetadata:(id)a3 selfContextId:(id)a4;
- (id)extractFactorAndFoldersForServices:(id)a0;
- (id)getAssetsByFactorNamesForServices:(id)a0;
- (id)getFactorNamesForNonSkippableServices:(id)a0;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1;
- (BOOL)isAssetAvailableForService:(id)a0 inAssetPaths:(id)a1 withError:(id *)a2;
- (id)processSideLoadedAssetForTrialAsset:(id)a0 withAssetFolders:(id)a1;
- (id)processTrialAsset:(id)a0 withAssetFolders:(id)a1;
- (BOOL)promoteAssetsForServices:(id)a0 withFailedServices:(id)a1;
- (BOOL)registerForServices:(id)a0 withAssetsDelegate:(id)a1;
- (BOOL)setAssetsProvisionalForServices:(id)a0;

@end
