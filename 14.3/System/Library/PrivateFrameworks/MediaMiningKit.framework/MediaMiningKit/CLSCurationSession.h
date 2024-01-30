@class NSMutableDictionary;

@interface CLSCurationSession : NSObject {
    NSMutableDictionary *_curationModelBySpecification;
}

@property (class, readonly) double legacyAestheticScoreThresholdToBeAwesome;
@property (class, readonly) double legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
@property (class, readonly) double legacyAestheticScoreThresholdToNotBeJunk;

+ (void)enumerateSignalsFromAsset:(id)a0 fullHierarchyName:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (id)scoringContextWithAssets:(id)a0;
+ (short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)a0 threshold:(double)a1;
+ (void)addAudioClassifications:(short)a0 toAudioClassificationCounts:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)curationModelForItemInfo:(id)a0 options:(id)a1;
- (id)curationModelForAsset:(id)a0;
- (unsigned long long)_latestCurationModelVersionApplicableForCurationModelSpecification:(id)a0;
- (void)prepareAssets:(id)a0;
- (id)curationModelWithSpecification:(id)a0;
- (id)_curationModelWithSpecification:(id)a0;
- (id)curationModelWithCurationModelVersion:(unsigned long long)a0 forAsset:(id)a1;
- (id)latestCurationModelForTesting;

@end
