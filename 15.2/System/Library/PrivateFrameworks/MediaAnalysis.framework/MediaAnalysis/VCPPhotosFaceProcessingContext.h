@interface VCPPhotosFaceProcessingContext : NSObject

@property float faceClusteringThreshold;
@property float faceClusteringJunkThreshold;
@property float faceClusteringAgeThreshold;
@property float faceMergeFaceprintDistanceThreshold;
@property float facePrimarySuggestionsThreshold;
@property unsigned long long minimumSuggestionSize;
@property BOOL quarantineTwinsOnAssetEnabled;
@property unsigned long long minFaceCountToTriggerClustering;
@property unsigned long long maxFaceCountForClustering;
@property BOOL suggestionsLogEnabled;
@property BOOL faceClusteringDisabled;
@property unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property BOOL personBuildingDisabled;
@property BOOL personBuilderMergeCandidatesDisabled;
@property unsigned long long advancedStatusMergeCandidateLimit;
@property unsigned long long advancedStatusVerifiedPersonLimit;
@property BOOL clusterIncludeTorsoOnlyFaces;
@property int processingVersion;

+ (BOOL)_includeTorsoOnlyFaces;
+ (id)contextWithPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;

@end
