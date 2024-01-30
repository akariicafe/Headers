@class NSSet;

@interface gbtRegressorOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double smart_charge_duration;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithSmart_charge_duration:(double)a0;

@end
