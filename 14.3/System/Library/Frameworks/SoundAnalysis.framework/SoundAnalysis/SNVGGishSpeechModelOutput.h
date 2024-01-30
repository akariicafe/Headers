@class MLMultiArray, NSSet;

@interface SNVGGishSpeechModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *output1;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutput1:(id)a0;

@end
