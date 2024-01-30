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
@property (readonly) unsigned long long minimumSupportedVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithVersion:(unsigned long long)a0;

- (id)initWithVersion:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupVersion32;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (void)setupVersion40;
- (void)setupVersion31;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;

@end
