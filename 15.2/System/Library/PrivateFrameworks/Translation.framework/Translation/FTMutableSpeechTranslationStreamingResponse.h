@class FTAudioLimitExceeded, FTRequestStatsResponse, FTRecognitionCandidate, FTSpeechTranslationServerEndpointFeatures, FTSpeechTranslationTextToSpeechResponse, FTSpeechTranslationFinalRecognitionResponse, FTFinalBlazarResponse, FTSpeechTranslationMtResponse, FTSpeechTranslationPartialRecognitionResponse, FTRecognitionProgress, FTServerEndpointFeatures, FTClientSetupInfo;

@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
