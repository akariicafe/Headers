@class MLMultiArray, NSSet;

@interface FCUserVectorModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *aggregates;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithAggregates:(id)a0;
- (void).cxx_destruct;

@end
