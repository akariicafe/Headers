@class NSDictionary, NSSet;

@interface RTPlaceTypeClassifierModelMultiClassOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long target;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(long long)a0 classProbability:(id)a1;

@end
