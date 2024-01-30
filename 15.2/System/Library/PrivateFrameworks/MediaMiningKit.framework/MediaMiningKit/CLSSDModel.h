@class NSString, CLSSignalNode;

@interface CLSSDModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode *_foodDrinkNode;
    CLSSignalNode *_landscapeCityscapeNode;
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
- (void)setupVersion51_4;

@end
