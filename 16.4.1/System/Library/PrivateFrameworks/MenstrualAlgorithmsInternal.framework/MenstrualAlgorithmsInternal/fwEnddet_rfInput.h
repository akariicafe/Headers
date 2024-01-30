@class MLMultiArray, NSSet;

@interface fwEnddet_rfInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithInput:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
