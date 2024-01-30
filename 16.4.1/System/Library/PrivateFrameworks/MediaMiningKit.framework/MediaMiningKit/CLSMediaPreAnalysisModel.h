@class NSString, CLSSignalNode;

@interface CLSMediaPreAnalysisModel : NSObject <CLSSignalModel> {
    CLSSignalNode *_probableRotationDirection0DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection90DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection180DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection270DegreesConfidenceNode;
}

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *sharpnessNode;
@property (readonly) CLSSignalNode *exposureNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isWronglyRotatedFromMediaAnalysisProperties:(id)a0;
- (void)setupVersion31;
- (void)setupVersion45;
- (void)setupVersion57;

@end
