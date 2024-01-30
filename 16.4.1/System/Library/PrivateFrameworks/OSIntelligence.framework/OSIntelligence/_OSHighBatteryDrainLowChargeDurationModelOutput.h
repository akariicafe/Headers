@class NSDictionary, NSSet;

@interface _OSHighBatteryDrainLowChargeDurationModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long label;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(long long)a0 classProbability:(id)a1;

@end
