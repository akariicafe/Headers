@class NSString, CLSSignalNode;

@interface CLSNSFWModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode *_noneNode;
    CLSSignalNode *_generalNode;
    CLSSignalNode *_explicitNode;
    CLSSignalNode *_brassiereNode;
    CLSSignalNode *_femaleBreastNode;
    CLSSignalNode *_maleBreastNode;
    CLSSignalNode *_buttocksNode;
    CLSSignalNode *_femaleGenitalsNode;
    CLSSignalNode *_maleGenitalsNode;
    CLSSignalNode *_underwearNode;
    CLSSignalNode *_maleUnderwearNode;
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
- (void)setupVersion32;
- (void)setupVersion33;
- (void)setupVersion50_4;

@end
