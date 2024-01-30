@class MLModel, MLDictionaryFeatureProvider, APOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLModel *predictionModel;
@property (readonly, nonatomic) MLDictionaryFeatureProvider *input;
@property (readonly, nonatomic) APOdmlAssetManager *assetManager;

- (void).cxx_destruct;
- (id)constructDictionaryWithResponse:(id)a0;
- (BOOL)checkFeatureVersion:(id)a0;
- (id)addOnDeviceFeaturesToDictionary:(id)a0;
- (id)initWithResponse:(id)a0 assetManager:(id)a1 model:(id)a2;
- (id)predictTapThroughRate;

@end
