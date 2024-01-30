@class MLMultiArray, NSSet;

@interface SNHallucinatorInputProvider : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *feature;
@property (retain, nonatomic) MLMultiArray *tokenGroup;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
