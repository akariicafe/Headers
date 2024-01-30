@class MLMultiArray, NSSet;

@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *user_vector;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser_vector:(id)a0;

@end
