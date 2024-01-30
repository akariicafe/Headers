@interface CLSAssetScoringContext : NSObject

@property (nonatomic) double viewCountThreshold;
@property (nonatomic) double playCountThreshold;
@property (nonatomic) BOOL shouldEmphasizeShared;
@property (nonatomic) BOOL shouldEmphasizeAdjusted;
@property (nonatomic) BOOL shouldEmphasizePanorama;
@property (nonatomic) BOOL shouldEmphasizeLive;
@property (nonatomic) BOOL shouldEmphasizeBurst;
@property (nonatomic) BOOL shouldEmphasizeSDOF;
@property (nonatomic) BOOL shouldEmphasizeReframe;
@property (nonatomic) short audioClassificationsToEmphasize;
@property (nonatomic) double aestheticScoreThresholdToBeAwesome;

@end
