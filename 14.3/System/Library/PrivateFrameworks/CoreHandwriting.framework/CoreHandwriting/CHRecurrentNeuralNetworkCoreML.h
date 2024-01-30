@class NSString, MLModel, NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork

@property (readonly, retain, nonatomic) MLModel *model;
@property (readonly, retain, nonatomic) NSString *resourcePath;
@property (readonly, retain, nonatomic) NSArray *inputNames;
@property (readonly, retain, nonatomic) NSDictionary *featureCounts;
@property (readonly, retain, nonatomic) NSArray *outputNames;
@property (readonly, retain, nonatomic) NSDictionary *classCounts;

- (void)dealloc;
- (id)initWithModelName:(id)a0 featureIndex:(long long)a1;
- (id)initWithModelName:(id)a0;

@end
