@class NSDictionary, NSSet, NSObject;
@protocol OS_os_log;

@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm> {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain, nonatomic) NSDictionary *personFeatures;
@property (retain, nonatomic) NSDictionary *sceneFeatures;
@property (retain, nonatomic) NSSet *goldAssets;
@property (nonatomic) double similarityScoreNormalizer;

- (void).cxx_destruct;
- (void)preprocessWithProgressBlock:(id /* block */)a0;
- (float)semanticScoreForAsset:(id)a0;
- (id)semanticScoreByAssetUUIDForAssets:(id)a0;
- (id)dataToPersist;
- (id)initWithGoldAssets:(id)a0 loggingConnection:(id)a1;
- (id)initWithGoldAssets:(id)a0 persistedData:(id)a1 loggingConnection:(id)a2;
- (id)_semanticScoreByAssetUUIDForAssets:(id)a0 normalize:(BOOL)a1;
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(id /* block */)a0;

@end
