@interface PVUserDefaults : NSObject

+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (float)faceClusteringJunkThreshold;
+ (BOOL)faceClusteringDisabled;
+ (unsigned long long)minimumSuggestionSize;
+ (unsigned long long)maxFaceCountForClustering;
+ (float)facePrimarySuggestionsThreshold;
+ (float)faceClusteringThreshold;
+ (float)faceClusteringAgeThreshold;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (BOOL)suggestionsLogEnabled;
+ (BOOL)personBuildingDisabled;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (BOOL)quarantineTwinsOnAssetEnabled;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (float)faceIDModelClassificationThreshold;
+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (BOOL)isBlacklistDisabled;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;

@end
