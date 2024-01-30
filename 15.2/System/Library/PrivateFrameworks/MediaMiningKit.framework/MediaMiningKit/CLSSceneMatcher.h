@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sceneNamesBySceneLabel;
+ (id)sharedSceneMatcher;
+ (id)junkSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)babyAndPetSceneNames;
+ (id)babySceneNames;
+ (id)childTeenAndAdultSceneNames;
+ (id)interestingSceneNames;
+ (id)whiteboardSceneNames;
+ (id)sceneNamesWithSceneLabel:(id)a0;

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)a0;

@end
