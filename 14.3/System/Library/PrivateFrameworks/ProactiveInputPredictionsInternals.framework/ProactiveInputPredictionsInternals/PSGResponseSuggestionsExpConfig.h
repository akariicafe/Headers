@class NSString, TRIClient;

@interface PSGResponseSuggestionsExpConfig : NSObject <PSGResponseSuggestionsExpConfigProtocol> {
    TRIClient *_trialClient;
    NSString *_namespaceName;
}

@property (readonly, nonatomic) NSString *treatmentName;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL isMLModelEnabled;
@property (readonly, nonatomic) NSString *inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *espressoBinFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNamespaceName:(id)a0;
- (void)_updateFactorLevels;
- (void)_setDefaultValuesForFactors;

@end
