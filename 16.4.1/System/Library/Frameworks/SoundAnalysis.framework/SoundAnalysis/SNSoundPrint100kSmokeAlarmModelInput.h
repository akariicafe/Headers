@class MLMultiArray, NSSet;

@interface SNSoundPrint100kSmokeAlarmModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *soundprint_Placeholder;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSoundprint_Placeholder:(id)a0;

@end
