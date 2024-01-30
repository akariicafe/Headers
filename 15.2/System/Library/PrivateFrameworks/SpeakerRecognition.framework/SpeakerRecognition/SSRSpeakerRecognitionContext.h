@class SSRLoggingAggregator, NSArray, CSAsset, NSString, NSUUID, NSDictionary, NSURL;

@interface SSRSpeakerRecognitionContext : NSObject

@property (retain, nonatomic) NSArray *voiceProfileArray;
@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSUUID *endpointUUID;
@property (readonly, nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) unsigned long long scoreType;
@property (readonly, nonatomic) unsigned long long recognitionStyle;
@property (readonly, nonatomic) float combinationWeight;
@property (readonly, nonatomic) NSDictionary *vtEventInfo;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) NSURL *resourceFilePath;
@property (readonly, nonatomic) NSURL *vadResourcePath;
@property (readonly, nonatomic) NSDictionary *modelsContext;
@property (readonly, nonatomic) NSDictionary *expModelsContext;
@property (readonly, nonatomic) NSDictionary *numEnrollmentUtterances;
@property (readonly, nonatomic) unsigned long long maxAllowedAudioSamples;
@property (readonly, nonatomic) BOOL osTransactionReqd;
@property (readonly, nonatomic) NSString *debugUtteranceAudioFile;
@property (readonly, nonatomic) NSString *debugUtteranceMetaFile;
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator;
@property (readonly, nonatomic) NSString *sessionId;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVoiceRecognitionContext:(id)a0 error:(id *)a1;
- (id)pickAssetForProfiles:(id)a0 forSpIdType:(unsigned long long)a1 withAssetArray:(id)a2;
- (id)pickAssetForProfiles:(id)a0 forSpIdType:(unsigned long long)a1;
- (void)composeModelContextsForProfiles:(id)a0 forSpIdType:(unsigned long long)a1 forAsset:(id)a2 completion:(id /* block */)a3;
- (BOOL)_checkIfModelsPresentForProfiles:(id)a0 forSpIdType:(unsigned long long)a1 forAsset:(id)a2;

@end
