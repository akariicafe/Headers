@class NSString, CLSSignalNode;

@interface CLSJunkClassificationModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long currentAnalyzerVersion;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *negativeNode;
@property (readonly) CLSSignalNode *nonMemorableNode;
@property (readonly) CLSSignalNode *poorQualityNode;
@property (readonly) CLSSignalNode *textDocumentNode;
@property (readonly) CLSSignalNode *tragicFailureNode;
@property (readonly) CLSSignalNode *tragicFailureInternalNode;
@property (readonly) CLSSignalNode *screenshotNode;
@property (readonly) CLSSignalNode *badFramingNode;
@property (readonly) CLSSignalNode *badLightingNode;
@property (readonly) CLSSignalNode *blurryNode;
@property (readonly) CLSSignalNode *foodOrDrinkNode;
@property (readonly) CLSSignalNode *otherNode;
@property (readonly) CLSSignalNode *medicalReferenceNode;
@property (readonly) CLSSignalNode *negativeInternalNode;
@property (readonly) CLSSignalNode *receiptOrDocumentNode;
@property (readonly) CLSSignalNode *repairReferenceNode;
@property (readonly) CLSSignalNode *shoppingReferenceNode;
@property (readonly) CLSSignalNode *utilityReferenceNode;
@property (readonly) CLSSignalNode *legacyNode;
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
- (void)setupVersion31;
- (void)setupVersion32;
- (void)setupVersion40;
- (void)setupVersion81;
- (void)setupVersion86;

@end
