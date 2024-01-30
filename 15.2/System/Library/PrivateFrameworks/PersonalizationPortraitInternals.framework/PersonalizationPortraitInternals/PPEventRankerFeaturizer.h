@class PPTrialWrapper;

@interface PPEventRankerFeaturizer : NSObject {
    PPTrialWrapper *_trialWrapper;
}

+ (void)clearAssetCache;
+ (id)scoreFeatureSchema:(id)a0;

- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)a0;
- (id)featureSchema;

@end
