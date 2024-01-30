@class DESRecipe, DESDediscoKey;

@interface DESDediscoUploader : NSObject {
    DESRecipe *_recipe;
}

@property (readonly, nonatomic) DESDediscoKey *key;

+ (BOOL)hasAllZeroData:(id)a0;
+ (BOOL)uploadViaDedisco:(id)a0 jsonResult:(id)a1 recipe:(id)a2 bundleIdentifier:(id)a3 submissionCount:(unsigned int *)a4 error:(id *)a5;

- (void).cxx_destruct;
- (BOOL)donateCategoricalMetadata:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (BOOL)donateFedStatsMetrics:(id)a0 dataKey:(id)a1 dataTypeContent:(id)a2 dediscoMetadata:(id)a3 error:(id *)a4 recorder:(id)a5;
- (BOOL)donateMetrics:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (unsigned int)donateResult:(id)a0 dediscoMetadata:(id)a1 recorder:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 recipe:(id)a1;
- (BOOL)scaleData:(id)a0 withScalingFactor:(double)a1;

@end
