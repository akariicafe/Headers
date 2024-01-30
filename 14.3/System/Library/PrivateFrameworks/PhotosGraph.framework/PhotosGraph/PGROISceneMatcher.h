@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
    NSMutableDictionary *_confidenceThresholdByBlacklistedSceneIdentifierByROILabel;
}

+ (id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)a0 blacklisted:(BOOL)a1;
+ (id)blacklistedSceneNamesByROILabel;
+ (id)whitelistedSceneNamesByROILabel;
+ (id)sharedROISceneMatcher;
+ (id)beachSceneNames;
+ (id)mountainSceneNames;
+ (id)natureSceneNames;
+ (id)nonNatureSceneNames;
+ (id)waterSceneNames;
+ (id)nonWaterSceneNames;
+ (id)urbanSceneNames;

- (void).cxx_destruct;
- (id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)a0;
- (id)confidenceThresholdByBlacklistedSceneIdentifierForROILabel:(id)a0;

@end
