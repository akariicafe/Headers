@class QSSFinalBlazarResponse, QSSSpeechTranslationFinalRecognitionResponse, QSSServerEndpointFeatures, QSSRecognitionCandidate, QSSSpeechTranslationServerEndpointFeatures, QSSSpeechTranslationPartialRecognitionResponse, QSSClientSetupInfo, QSSRecognitionProgress, QSSSpeechTranslationMtResponse, QSSSpeechTranslationTextToSpeechResponse, QSSAudioLimitExceeded, QSSRequestStatsResponse;

@interface QSSMutableSpeechTranslationStreamingResponse : QSSSpeechTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSSpeechTranslationPartialRecognitionResponse *contentAsQSSSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) QSSSpeechTranslationFinalRecognitionResponse *contentAsQSSSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;
@property (copy, nonatomic) QSSSpeechTranslationMtResponse *contentAsQSSSpeechTranslationMtResponse;
@property (copy, nonatomic) QSSSpeechTranslationTextToSpeechResponse *contentAsQSSSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSSpeechTranslationServerEndpointFeatures *contentAsQSSSpeechTranslationServerEndpointFeatures;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
