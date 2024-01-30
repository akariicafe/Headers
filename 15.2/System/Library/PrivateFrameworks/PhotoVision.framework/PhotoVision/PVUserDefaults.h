@interface PVUserDefaults : NSObject

+ (BOOL)suggestionsLogEnabled;
+ (unsigned long long)maxFaceCountForClustering;
+ (float)facePrimarySuggestionsThreshold;
+ (BOOL)faceClusteringDisabled;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (float)faceClusteringJunkThreshold;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (unsigned long long)minimumSuggestionSize;
+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (float)faceClusteringAgeThreshold;
+ (float)faceIDModelClassificationThreshold;
+ (float)faceClusteringThreshold;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (BOOL)isBlacklistDisabled;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (BOOL)personBuildingDisabled;
+ (BOOL)quarantineTwinsOnAssetEnabled;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;

@end
