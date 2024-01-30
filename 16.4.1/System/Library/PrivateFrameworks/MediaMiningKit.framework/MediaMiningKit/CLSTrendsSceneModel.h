@class NSString, CLSSignalNode;

@interface CLSTrendsSceneModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode *_aircraftNode;
    CLSSignalNode *_airplaneNode;
    CLSSignalNode *_birdNode;
    CLSSignalNode *_flowerNode;
    CLSSignalNode *_forestNode;
    CLSSignalNode *_rainbowNode;
    CLSSignalNode *_skateboardingNode;
    CLSSignalNode *_skyscraperNode;
    CLSSignalNode *_snowNode;
    CLSSignalNode *_sunsetSunriseNode;
}

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)modelInfo;
- (void).cxx_destruct;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion33;
- (void)setupVersion80;
- (void)setupVersion84;

@end
