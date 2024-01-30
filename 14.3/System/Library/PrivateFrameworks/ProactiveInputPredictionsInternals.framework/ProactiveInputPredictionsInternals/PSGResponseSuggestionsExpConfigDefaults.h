@class NSString;

@interface PSGResponseSuggestionsExpConfigDefaults : NSObject <PSGResponseSuggestionsExpConfigProtocol>

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

@end
