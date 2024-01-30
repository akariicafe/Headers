@class MLMultiArray, NSSet;

@interface MonzaV4_1Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *angle;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithAngle:(id)a0;

@end
