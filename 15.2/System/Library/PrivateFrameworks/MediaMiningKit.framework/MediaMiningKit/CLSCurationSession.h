@class NSMutableDictionary;

@interface CLSCurationSession : NSObject {
    NSMutableDictionary *_curationModelBySpecification;
}

@property (class, readonly) double legacyAestheticScoreThresholdToBeAwesome;
@property (class, readonly) double legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
@property (class, readonly) double legacyAestheticScoreThresholdToNotBeJunk;

+ (id)scoringContextWithAssets:(id)a0 aestheticScoreThresholdToBeAwesome:(double)a1;
+ (void)enumerateSignalsFromAsset:(id)a0 fullHierarchyName:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (void)addAudioClassifications:(short)a0 toAudioClassificationCounts:(id)a1;
+ (short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)a0 threshold:(double)a1;

- (void).cxx_destruct;
- (id)init;
- (id)curationModelForItemInfo:(id)a0 options:(id)a1;
- (id)curationModelForAsset:(id)a0;
- (void)prepareAssets:(id)a0;
- (id)latestCurationModelForTesting;
- (unsigned long long)_latestCurationModelVersionApplicableForCurationModelSpecification:(id)a0;
- (id)_curationModelWithSpecification:(id)a0;
- (id)curationModelWithSpecification:(id)a0;
- (id)curationModelWithCurationModelVersion:(unsigned long long)a0 forAsset:(id)a1;

@end
