@class PHPhotoLibrary, NSString;

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider, CPAnalyticsDynamicPropertyProvider>

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetPropertySetsToFetch;

- (id)_PHAssetCollectionFromPayload:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_ageDescriptionForMediaDate:(id)a0;
- (id)_junkConfidenceThresholdForIdentifier:(unsigned int)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)_sceneLabelByClassificationIdentifier:(unsigned int)a0;
- (id)_mediaProperty:(id)a0 forAssetCollection:(id)a1;
- (BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:(id)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned int)a0;
- (id)_cameraTypeFromImportSource:(long long)a0;
- (id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned int)a0;
- (id)_sdConfidenceThresholdForIdentifier:(unsigned int)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (id)_PHAssetFromPayload:(id)a0;
- (id)_sceneForAsset:(id)a0;
- (id)_mediaCountFromPayload:(id)a0;
- (id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned int)a0;
- (BOOL)_hasPetsForSceneClassifications:(id)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (void)registerSystemProperties:(id)a0;
- (BOOL)_hasPeopleForSceneClassifications:(id)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (id)_mediaProperty:(id)a0 forAsset:(id)a1;
- (id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned int)a0 sceneAnalysisVersion:(unsigned long long)a1;
- (id)_sceneSubjectForAsset:(id)a0;
- (BOOL)_isPeopleSceneIdentifier:(unsigned int)a0;

@end
