@class MLMultiArray, NSSet;

@interface backtapOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *model_output;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithModel_output:(id)a0;

@end
