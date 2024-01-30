@class Project;

@interface MiroVideoStabilizerController : NSObject <Memories.VideoStabilizerTestable>

@property (retain, nonatomic) Project *project;

+ (void)load;
+ (id)stabilizerFactory;
+ (BOOL)testStabilizationAgainWith:(id)a0;

- (void).cxx_destruct;
- (BOOL)canGenerateTestMADRecipesForAssets:(id)a0;
- (BOOL)test_inputMADRecipeToPVTimedStabilizationConfigForAssets:(id)a0;
- (BOOL)test_cleanApertureRectBasisMatchesPhotosForAssets:(id)a0;
- (BOOL)test_applyHomographyTransformForAssets:(id)a0;
- (void)writeStabilizationDataMovie:(id)a0 timedStabConfigs:(id)a1 completion:(id /* block */)a2;
- (id)computeInertiaCamL1Stabilization;
- (id)requestMediaAnalysisStabilizationService;
- (void)writeStabilizationDataMoviesToFolder:(id)a0 assetIDMetadataTimedObjects:(id)a1 completion:(id /* block */)a2;
- (id)timedMetadataFromFrameInstructions:(id)a0 withClip:(id)a1;
- (id)requestStablizationFromInertiaCam:(id)a0 assetFPS:(float)a1 cropFraction:(float)a2 clip:(id)a3;
- (id)candidateAssetsforStabilizationFromProject;
- (id)candidateAssetsFromAssetCollection:(id)a0;
- (id)generateTestMADRecipesForAssets:(id)a0;
- (id)proVideoTimedObjectMapFromRecipes:(id)a0;
- (id)fetchAndFormatStabilizationMetadata;
- (BOOL)test_deNormalizedCropRect;

@end
