@class NSDictionary, NSSet;

@interface LCFCoreMLFeatureProvider : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) NSDictionary *featureValues;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)init:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
