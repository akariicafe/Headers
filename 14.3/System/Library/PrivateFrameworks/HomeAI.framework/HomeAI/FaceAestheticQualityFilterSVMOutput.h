@class NSDictionary, NSSet;

@interface FaceAestheticQualityFilterSVMOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long classLabel;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithClassLabel:(long long)a0 classProbability:(id)a1;

@end
