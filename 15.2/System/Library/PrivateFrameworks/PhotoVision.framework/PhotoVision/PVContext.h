@interface PVContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float faceClusteringThreshold;
@property (nonatomic) float faceClusteringJunkThreshold;
@property (nonatomic) float faceClusteringAgeThreshold;
@property (nonatomic) float faceMergeFaceprintDistanceThreshold;
@property (nonatomic) float facePrimarySuggestionsThreshold;
@property (nonatomic) unsigned long long minimumSuggestionSize;
@property (nonatomic) BOOL quarantineTwinsOnAssetEnabled;
@property (nonatomic) unsigned long long minFaceCountToTriggerClustering;
@property (nonatomic) unsigned long long maxFaceCountForClustering;
@property (nonatomic) BOOL faceClusteringDisabled;
@property (nonatomic) BOOL personBuildingDisabled;
@property (nonatomic) BOOL personBuilderMergeCandidatesDisabled;
@property (nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
