@class DESRecipe, DESDediscoKey;

@interface DESDediscoUploader : NSObject {
    DESRecipe *_recipe;
}

@property (readonly, nonatomic) DESDediscoKey *key;

+ (void)initialize;
+ (BOOL)hasAllZeroData:(id)a0;
+ (BOOL)uploadViaDedisco:(id)a0 jsonResult:(id)a1 recipe:(id)a2 bundleIdentifier:(id)a3 submissionCount:(unsigned int *)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 recipe:(id)a1;
- (unsigned int)donateResult:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (BOOL)donateMetrics:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (BOOL)donateCategoricalMetadata:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (BOOL)scaleData:(id)a0 withScalingFactor:(double)a1;

@end
