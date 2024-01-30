@class MLMultiArray, NSSet;

@interface SNVGGishMusicModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input1;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput1:(id)a0;

@end
