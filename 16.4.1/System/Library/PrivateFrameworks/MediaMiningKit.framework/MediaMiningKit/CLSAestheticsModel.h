@class NSString, CLSSignalNode;

@interface CLSAestheticsModel : NSObject <CLSSignalModel>

@property (class, readonly) double legacyAestheticScoreThresholdToBeAwesome;
@property (class, readonly) double legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
@property (class, readonly) double legacyAestheticScoreThresholdToNotBeJunk;
@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *overallAestheticScoreNode;
@property (readonly) CLSSignalNode *wellFramedSubjectScoreNode;
@property (readonly) CLSSignalNode *wellChosenSubjectScoreNode;
@property (readonly) CLSSignalNode *tastefullyBlurredScoreNode;
@property (readonly) CLSSignalNode *sharplyFocusedSubjectScoreNode;
@property (readonly) CLSSignalNode *wellTimedShotScoreNode;
@property (readonly) CLSSignalNode *pleasantLightingScoreNode;
@property (readonly) CLSSignalNode *pleasantReflectionsScoreNode;
@property (readonly) CLSSignalNode *harmoniousColorScoreNode;
@property (readonly) CLSSignalNode *livelyColorScoreNode;
@property (readonly) CLSSignalNode *pleasantSymmetryScoreNode;
@property (readonly) CLSSignalNode *pleasantPatternScoreNode;
@property (readonly) CLSSignalNode *immersivenessScoreNode;
@property (readonly) CLSSignalNode *pleasantPerspectiveScoreNode;
@property (readonly) CLSSignalNode *pleasantPostProcessingScoreNode;
@property (readonly) CLSSignalNode *noiseScoreNode;
@property (readonly) CLSSignalNode *failureScoreNode;
@property (readonly) CLSSignalNode *pleasantCompositionScoreNode;
@property (readonly) CLSSignalNode *interestingSubjectScoreNode;
@property (readonly) CLSSignalNode *intrusiveObjectPresenceScoreNode;
@property (readonly) CLSSignalNode *pleasantCameraTiltScoreNode;
@property (readonly) CLSSignalNode *lowLightNode;
@property (readonly) double aestheticScoreThresholdToBeAwesome;
@property (readonly) double aestheticScoreThresholdToBeAestheticallyPrettyGood;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion31;
- (void)setupVersion32;
- (void)setupVersion86;

@end
