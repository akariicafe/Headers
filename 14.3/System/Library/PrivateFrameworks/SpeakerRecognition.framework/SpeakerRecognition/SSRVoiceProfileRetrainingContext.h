@class SSRLoggingAggregator, NSArray, SSRVoiceProfile, NSURL, NSString, NSDictionary, CSAsset;

@interface SSRVoiceProfileRetrainingContext : NSObject

@property (retain, nonatomic) NSArray *compareVoiceProfileArray;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile;
@property (readonly, nonatomic) unsigned long long spIdType;
@property (readonly, nonatomic) NSURL *resourceFilePath;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) BOOL filterToVoiceTriggerUtterances;
@property (readonly, nonatomic) BOOL forceRetrain;
@property (readonly, nonatomic) unsigned long long maxAllowedSpeakerVectors;
@property (readonly, nonatomic) NSDictionary *modelsContext;
@property (readonly, nonatomic) float combinationWeight;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator;
@property (readonly, nonatomic) NSString *sessionId;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVoiceRetrainingContext:(id)a0 error:(id *)a1;

@end
