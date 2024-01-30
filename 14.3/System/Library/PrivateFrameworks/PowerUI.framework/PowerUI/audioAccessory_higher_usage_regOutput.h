@class NSSet;

@interface audioAccessory_higher_usage_regOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double duration_pred;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithDuration_pred:(double)a0;

@end
