@class NSSet;

@interface RTPlaceTypeClassifierModelRankerOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double target;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithTarget:(double)a0;

@end
