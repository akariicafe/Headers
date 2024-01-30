@class MLMultiArray, NSSet;

@interface iconclassification__generated__Input : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input_1;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput_1:(id)a0;

@end
