@class MLMultiArray, NSSet;

@interface SNSoundPrintASmokeAlarmModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input1;
@property (retain, nonatomic) MLMultiArray *stateIn;
@property (retain, nonatomic) MLMultiArray *thresholdedHistoryIn;
@property (retain, nonatomic) MLMultiArray *detectedHistoryIn;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput1:(id)a0;
- (id)initWithInput1:(id)a0 stateIn:(id)a1 thresholdedHistoryIn:(id)a2 detectedHistoryIn:(id)a3;

@end
