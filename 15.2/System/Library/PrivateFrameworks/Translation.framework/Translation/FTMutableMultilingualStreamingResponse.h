@class FTRecognitionCandidate, FTRequestStatsResponse, FTAudioLimitExceeded, FTFinalBlazarResponse, FTPartialSpeechRecognitionResponse, FTFinalSpeechRecognitionResponse;

@interface FTMutableMultilingualStreamingResponse : FTMultilingualStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
