@class NSDictionary, NSSet;

@interface deoc_modelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long next_drain_is_significant;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithNext_drain_is_significant:(long long)a0 classProbability:(id)a1;

@end
