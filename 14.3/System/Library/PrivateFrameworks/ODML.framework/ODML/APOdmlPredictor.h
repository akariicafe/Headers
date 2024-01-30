@class MLDictionaryFeatureProvider, ADOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLDictionaryFeatureProvider *input;
@property (readonly, nonatomic) ADOdmlAssetManager *assetManager;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)predictTapThroughRate;
- (id)constructDictionaryWithResponse:(id)a0;
- (BOOL)checkFeatureVersion:(id)a0;
- (id)addOnDeviceFeaturesToDictionary:(id)a0;

@end
