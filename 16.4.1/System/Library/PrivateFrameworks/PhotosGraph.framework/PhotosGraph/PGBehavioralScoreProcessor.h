@class NSSet, NSDictionary, PGGraph, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGBehavioralScoreProcessor : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *previousGoldAssetUUIDs;
@property (nonatomic) long long algorithm;
@property (retain, nonatomic) NSDictionary *algorithmData;

+ (id)assetPropertySetsForUserBehavioralProcessing;

- (void).cxx_destruct;
- (id)_previousResults;
- (float)semanticScoreFromBehavioralScore:(float)a0;
- (id)initWithGraphManager:(id)a0 algorithm:(long long)a1;
- (id)_behavioralProcessorForAlgorithm:(long long)a0 goldAssets:(id)a1 graph:(id)a2 persistedData:(id)a3;
- (id)_newBehavioralProcessorForAlgorithm:(long long)a0 goldAssets:(id)a1 graph:(id)a2;
- (void)_persistNewGoldAssetsUUIDs:(id)a0 processorData:(id)a1;
- (void)_writeBehavioralScoresToPhotosDatabase:(id)a0 assets:(id)a1;
- (id)behavioralScoreByAssetUUIDForAssets:(id)a0 algorithmProcessor:(id)a1 personalHighAestheticsThreshold:(double)a2 personalGoodAestheticsThreshold:(double)a3;
- (float)behavioralScoreFromBaseScore:(float)a0 semanticScore:(float)a1;
- (id)goldAssetUUIDs;
- (BOOL)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)a0 previousGoldAssetUUIDs:(id)a1;
- (id)peopleFeatures;
- (void)processBehavioralScoresWithProgressBlock:(id /* block */)a0;
- (id)sceneFeatures;

@end
