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
@property (readonly) unsigned long long minimumSupportedVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithVersion:(unsigned long long)a0;

- (id)initWithVersion:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion33;

@end
