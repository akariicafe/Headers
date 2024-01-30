@class MLMultiArray, NSSet;

@interface CRTextDetectorModelV3Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *region_score;
@property (retain, nonatomic) MLMultiArray *affinity_score;
@property (retain, nonatomic) MLMultiArray *script_score;
@property (retain, nonatomic) MLMultiArray *link_score;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithRegion_score:(id)a0 affinity_score:(id)a1 script_score:(id)a2 link_score:(id)a3;
- (void).cxx_destruct;

@end
