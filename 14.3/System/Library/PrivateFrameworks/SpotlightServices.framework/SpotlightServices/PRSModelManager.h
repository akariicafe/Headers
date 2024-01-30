@class NSString, SSTrialManager, NSMutableDictionary, NSUserDefaults;

@interface PRSModelManager : NSObject

@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) SSTrialManager *trialModelManager;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSString *modelType;
@property (retain, nonatomic) NSMutableDictionary *models;
@property (nonatomic) unsigned long long activeCount;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) BOOL disablePolicy;

+ (BOOL)loadModelsWithDirectory:(id)a0 intoModelDict:(id)a1;
+ (id)sharedModelManager;
+ (id)directivesFromFilePath:(id)a0;
+ (void)cannedInfoForType:(unsigned long long)a0 directivesPath:(id *)a1 modelName:(id *)a2;
+ (void)pathsFor:(unsigned long long)a0 withParentPath:(id)a1 modelPath:(id *)a2 directivesPath:(id *)a3;
+ (void)loadModelWithURL:(id)a0 type:(unsigned long long)a1 directivesPath:(id)a2 intoModelDict:(id)a3 error:(id *)a4;

- (void)triggerUpdate;
- (void)updateModelsAccordingToHierarchy;
- (BOOL)loadModelsFromTrialWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)testL2WithData:(id)a0 experimental:(BOOL)a1;
- (BOOL)loadCannedModels;
- (void)activate;
- (BOOL)loadModels;
- (void)updateModelsAccordingToHierarchy:(id)a0 updateEnabled:(BOOL)a1 disablePendingUpdates:(BOOL)a2;
- (void)loadCannedModelWithType:(unsigned long long)a0 error:(id *)a1;
- (float *)computeScoresForFeatures:(id)a0 withBundleFeatures:(id)a1 serverBundleFeatures:(id)a2 usingModelContext:(id)a3 qos:(unsigned int)a4 shouldCancel:(BOOL *)a5 filterBundle:(id)a6;
- (id)getL2ModelVersionForClientBundle:(id)a0;
- (float *)computeL2ScoresForVectors:(id)a0 secondVector:(id)a1 withServerFeatures:(id)a2 withBundleFeatures:(id)a3 experimentalWeight1:(double)a4 experimentalWeight2:(double)a5 shouldCancel:(BOOL *)a6 clientBundle:(id)a7 hasMail:(BOOL)a8;
- (void)deactivate;

@end
