@class NSString, NSArray, CHSingletonMLModel, NSDictionary;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) CHSingletonMLModel *model;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSDictionary *featureCounts;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *classCounts;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModelName:(id)a0;
- (id)initWithModelName:(id)a0 featureIndex:(long long)a1;

@end
