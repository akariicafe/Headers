@class QSSRequestStatsResponse, QSSAudioLimitExceeded, QSSFinalBlazarResponse, QSSRecognitionCandidate, QSSPartialSpeechRecognitionResponse, QSSFinalSpeechRecognitionResponse;

@interface QSSMutableMultilingualStreamingResponse : QSSMultilingualStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
