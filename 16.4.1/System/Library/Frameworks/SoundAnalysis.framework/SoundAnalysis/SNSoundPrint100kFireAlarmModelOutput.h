@class MLMultiArray, NSSet;

@interface SNSoundPrint100kFireAlarmModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *Sigmoid;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSigmoid:(id)a0;

@end
