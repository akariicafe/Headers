@class NSMutableDictionary, NSXPCConnection, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface VCPMediaAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_analysisQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_group> *_storageGroup;
    NSNumber *_standalone;
    NSNumber *_minHighlightDuration;
    NSNumber *_noResultStrip;
    NSXPCConnection *_connection;
    NSXPCConnection *_mediaAnalysisServiceConnection;
    NSObject<OS_dispatch_queue> *_sandboxQueue;
    NSMutableDictionary *_sandboxHandles;
}

+ (id)sharedMediaAnalyzer;
+ (Class)_getDistanceDescriptorClass;

- (void).cxx_destruct;
- (id)init;
- (id)connection;
- (void)dealloc;
- (BOOL)cancelAnalysisWithRequestID:(int)a0;
- (int)requestAnalysis:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })postProcessMovieHighlightDuration:(id)a0 withOptions:(id)a1;
- (id)curateMovieAssetsForCollection:(id)a0 withAlreadyCuratedAssets:(id)a1 andDesiredCount:(unsigned long long)a2 allowOnDemand:(BOOL)a3;
- (id)requestAnalysis:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 andError:(id *)a4;
- (int)requestAnalysesForAssets:(id)a0 analysisTypes:(unsigned long long)a1 allowOndemand:(BOOL)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)requestAnalysisTypes:(unsigned long long)a0 forAssets:(id)a1 allowOndemand:(BOOL)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (void)distanceFromAsset:(id)a0 toAsset:(id)a1 duplicate:(long long *)a2 distance:(float *)a3;
- (void)distanceFromAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 toAsset:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 duplicate:(long long *)a4 distance:(float *)a5;
- (void)_setupMediaAnalysisServiceConnection;
- (long long)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)a0;
- (id)_postProcessMovieHighlights:(id)a0 analysis:(id)a1 withOptions:(id)a2;
- (id)_addClassificationResults:(id)a0 analysis:(id)a1;
- (unsigned long long)_metaAnalysisTypesForAsset:(id)a0;
- (id)_analyzeOndemand:(id)a0 forAnalysisTypes:(unsigned long long)a1 withExistingAnalysis:(id)a2 andOptions:(id)a3 storeAnalysis:(BOOL)a4;
- (id)_databaseForPhotoLibrary:(id)a0;
- (id)requestAnalysis:(unsigned long long)a0 forAsset:(id)a1 withExistingAnalysis:(id)a2 andDatabase:(id)a3 andOptions:(id)a4;
- (void)assetsFromPhotoLibrary:(id)a0 analyzedSinceDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getSceneDescriptors:(id)a0 asDescriptorClass:(Class)a1 withSceneRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 andAnalysisResults:(id)a3;
- (void)_checkDuplicate:(id)a0 withAsset:(id)a1 duplicate:(long long *)a2;
- (id)_queryDistanceDescriptor:(Class)a0 ofAsset:(id)a1 withExistingAnalysis:(id)a2 andDatabase:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 lastFeature:(BOOL)a5 isDegraded:(BOOL *)a6;
- (unsigned long long)_typesToRemove:(unsigned long long)a0 requested:(unsigned long long)a1;
- (int)requestAnalysisTypes:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 andProgressHandler:(id /* block */)a3 analyses:(id)a4;
- (long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)a0;
- (id)requestAnalysisTypes:(unsigned long long)a0 forAssetWithResourceURLs:(id)a1 withOptions:(id)a2 error:(id *)a3;
- (id)analyzeOndemand:(id)a0 pairedURL:(id)a1 forAnalysisTypes:(unsigned long long)a2 error:(id *)a3;
- (int)requestAnalysisForAsset:(id)a0 analysisTypes:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)assetsAnalyzedSinceDate:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestMovieHighlightsForAssets:(id)a0 withOptions:(id)a1;
- (id)requestLivePhotoEffectsForAssets:(id)a0 allowOnDemand:(BOOL)a1 flags:(unsigned long long)a2;
- (void)completeStorage;

@end
