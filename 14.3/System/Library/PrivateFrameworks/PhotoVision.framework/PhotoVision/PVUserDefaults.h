@interface PVUserDefaults : NSObject

+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (BOOL)faceClusteringDisabled;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (float)faceClusteringThreshold;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (float)faceClusteringAgeThreshold;
+ (float)faceIDModelClassificationThreshold;
+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (BOOL)isBlacklistDisabled;
+ (float)faceClusteringJunkThreshold;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (unsigned long long)minimumSuggestionSize;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (BOOL)personBuildingDisabled;
+ (BOOL)suggestionsLogEnabled;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (float)facePrimarySuggestionsThreshold;
+ (unsigned long long)maxFaceCountForClustering;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (BOOL)quarantineTwinsOnAssetEnabled;

@end
