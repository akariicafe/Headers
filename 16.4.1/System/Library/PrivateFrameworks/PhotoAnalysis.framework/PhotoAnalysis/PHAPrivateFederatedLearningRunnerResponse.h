@class NSData, NSDictionary;

@interface PHAPrivateFederatedLearningRunnerResponse : NSObject

@property (retain, nonatomic) NSData *dataPackage;
@property (retain, nonatomic) NSDictionary *trainingMetrics;

- (void).cxx_destruct;
- (id)initWithDataPackage:(id)a0 layersToTrain:(id)a1 trainingLossesPerEpoch:(id)a2 trainingAccuraciesPerEpoch:(id)a3;

@end
