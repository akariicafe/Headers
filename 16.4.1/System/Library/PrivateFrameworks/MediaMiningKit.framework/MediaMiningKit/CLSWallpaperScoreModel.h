@class NSString, CLSSignalNode;

@interface CLSWallpaperScoreModel : NSObject <CLSSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *cityscapeNode;
@property (readonly) CLSSignalNode *landscapeNode;
@property (readonly) CLSSignalNode *catNode;
@property (readonly) CLSSignalNode *dogNode;
@property (readonly) CLSSignalNode *petNode;
@property (readonly) CLSSignalNode *peopleNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (void)setupVersion77;
- (void)setupVersion88;

@end
