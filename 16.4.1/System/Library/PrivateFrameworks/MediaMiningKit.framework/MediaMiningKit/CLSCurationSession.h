@class NSMutableDictionary;

@interface CLSCurationSession : NSObject {
    NSMutableDictionary *_curationModelBySpecification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _curationModelBySpecificationLock;
}

@property (class, readonly) double legacyAestheticScoreThresholdToBeAwesome;
@property (class, readonly) double legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
@property (class, readonly) double legacyAestheticScoreThresholdToNotBeJunk;

+ (void)enumerateSignalsFromAsset:(id)a0 fullHierarchyName:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (id)scoringContextWithAssets:(id)a0 aestheticScoreThresholdToBeAwesome:(double)a1;
+ (void)addAudioClassifications:(short)a0 toAudioClassificationCounts:(id)a1;
+ (short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)a0 threshold:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)curationModelForAsset:(id)a0;
- (id)curationModelForItemInfo:(id)a0 options:(id)a1;
- (void)prepareAssets:(id)a0;
- (id)curationModelWithSpecification:(id)a0;
- (id)_curationModelWithSpecification:(id)a0;
- (id)curationModelWithAsset:(id)a0;

@end
