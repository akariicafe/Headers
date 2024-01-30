@class MLMultiArray, NSSet;

@interface backtapInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *model_input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithModel_input:(id)a0;

@end
