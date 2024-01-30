@class FTEndPointCandidate, FTRequestStatsResponse, FTAudioLimitExceeded, FTRecognitionCandidate, FTEndPointLikelihood, FTPartialSpeechRecognitionResponse, FTServerEndpointFeatures, FTRecognitionProgress, FTCheckForSpeechResponse, FTFinalSpeechRecognitionResponse, FTUpdatedAcousticProfile, FTClientSetupInfo;

@interface FTMutableRecognitionStreamingResponse : FTRecognitionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (copy, nonatomic) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (copy, nonatomic) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
