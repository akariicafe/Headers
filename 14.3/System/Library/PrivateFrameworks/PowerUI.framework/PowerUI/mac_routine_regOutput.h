@class NSSet;

@interface mac_routine_regOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double duration_pred;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithDuration_pred:(double)a0;

@end
