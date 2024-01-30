@class NSString, CLSSignalNode;

@interface CLSPotentialLandmarkModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode *_landmarkNode;
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
- (void)setupVersion32;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)modelInfo;
- (void)setupVersion33;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;

@end
