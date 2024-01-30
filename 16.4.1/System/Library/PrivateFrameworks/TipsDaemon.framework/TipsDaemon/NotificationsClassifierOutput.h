@class NSDictionary, NSSet;

@interface NotificationsClassifierOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long predictedValue;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedValue:(long long)a0 classProbability:(id)a1;

@end
