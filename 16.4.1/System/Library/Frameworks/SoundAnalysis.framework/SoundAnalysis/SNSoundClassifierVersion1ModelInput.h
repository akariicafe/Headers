@class MLMultiArray, NSSet;

@interface SNSoundClassifierVersion1ModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *audioSamples;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithAudioSamples:(id)a0;

@end
