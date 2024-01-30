@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)sceneNamesBySceneLabel;
+ (id)childTeenAndAdultSceneNames;
+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sharedSceneMatcher;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)whiteboardSceneNames;
+ (id)sceneNamesWithSceneLabel:(id)a0;
+ (id)babyAndPetSceneNames;
+ (id)junkSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)interestingSceneNames;

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)a0;

@end
