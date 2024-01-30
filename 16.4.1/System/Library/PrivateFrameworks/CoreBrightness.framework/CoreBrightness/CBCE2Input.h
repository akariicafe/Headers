@class MLMultiArray, NSSet;

@interface CBCE2Input : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithInput:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
