@class PHPhotoLibrary;

@interface PGAssetComposabilityScoreComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    BOOL _computeDiptychScores;
    BOOL _computeTriptychScores;
}

@property (readonly) double bestDistance;
@property (readonly) double identicalSimilarityThreshold;
@property (readonly) double semanticalSimilarityThreshold;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 options:(id)a1;
- (double)_distanceBetweenSceneprint:(id)a0 andSceneprint:(id)a1;
- (double)composabilityScoreWithAssetDistance:(double)a0;
- (double)composabilityScoreWithAssetDistance:(double)a0 andDistance:(double)a1 andDistance:(double)a2;
- (id)sceneprintWithAsset:(id)a0;
- (id)composabilityScoresOfAssetsForLocalIdentifiers:(id)a0;

@end
