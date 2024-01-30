@class NSArray;

@interface PHAPrivateFederatedLearningModelTrainerResponse : NSObject

@property (retain, nonatomic) NSArray *parameterDeltas;
@property (retain, nonatomic) NSArray *trainingLossesPerEpoch;
@property (retain, nonatomic) NSArray *trainingAccuraciesPerEpoch;
@property (nonatomic) unsigned long long trainingEpochs;
@property (nonatomic) unsigned long long numberOfTrainingSamples;

- (void).cxx_destruct;
- (id)initWithParameterDeltas:(id)a0 trainingLossesPerEpoch:(id)a1 trainingAccuraciesPerEpoch:(id)a2 trainingEpochs:(unsigned long long)a3 numberOfTrainingSamples:(unsigned long long)a4;

@end
