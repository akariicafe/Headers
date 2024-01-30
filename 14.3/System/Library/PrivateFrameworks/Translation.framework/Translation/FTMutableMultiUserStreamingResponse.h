@class FTRequestStatsResponse, FTAudioLimitExceeded, FTRecognitionCandidate, FTServerEndpointFeatures, FTPartialSpeechRecognitionResponse, FTRecognitionProgress, FTFinalSpeechRecognitionResponse, FTClientSetupInfo, FTFinalBlazarResponse;

@interface FTMutableMultiUserStreamingResponse : FTMultiUserStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
