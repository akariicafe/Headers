@class NSArray, MLModel, APOdmlFeatureHandler, APOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLModel *predictionModel;
@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) APOdmlFeatureHandler *featureHandler;
@property (readonly, nonatomic) NSArray *adamIDs;

- (void).cxx_destruct;
- (id)initWithResponses:(id)a0 adSpecificFeatures:(id)a1 assetManager:(id)a2 model:(id)a3;
- (void)localOutputLog:(id)a0 adamID:(id)a1;
- (id)predictTapThroughRate;
- (void)validateOutput:(id)a0 adamID:(id)a1;

@end
