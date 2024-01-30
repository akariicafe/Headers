@class NSDictionary, NSSet;

@interface gbtClassifierOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long wait_to_charge;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithWait_to_charge:(long long)a0 classProbability:(id)a1;

@end
