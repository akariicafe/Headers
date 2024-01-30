@class QSSPartialSpeechRecognitionResponse, QSSCheckForSpeechResponse, QSSEndPointLikelihood, QSSRecognitionCandidate, QSSUpdatedAcousticProfile, QSSAudioLimitExceeded, QSSClientSetupInfo, QSSEndPointCandidate, QSSRecognitionProgress, QSSFinalSpeechRecognitionResponse, QSSServerEndpointFeatures, QSSRequestStatsResponse;

@interface QSSMutableRecognitionStreamingResponse : QSSRecognitionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSFinalSpeechRecognitionResponse *contentAsQSSFinalSpeechRecognitionResponse;
@property (copy, nonatomic) QSSPartialSpeechRecognitionResponse *contentAsQSSPartialSpeechRecognitionResponse;
@property (copy, nonatomic) QSSUpdatedAcousticProfile *contentAsQSSUpdatedAcousticProfile;
@property (copy, nonatomic) QSSEndPointLikelihood *contentAsQSSEndPointLikelihood;
@property (copy, nonatomic) QSSEndPointCandidate *contentAsQSSEndPointCandidate;
@property (copy, nonatomic) QSSRecognitionProgress *contentAsQSSRecognitionProgress;
@property (copy, nonatomic) QSSCheckForSpeechResponse *contentAsQSSCheckForSpeechResponse;
@property (copy, nonatomic) QSSRecognitionCandidate *contentAsQSSRecognitionCandidate;
@property (copy, nonatomic) QSSRequestStatsResponse *contentAsQSSRequestStatsResponse;
@property (copy, nonatomic) QSSServerEndpointFeatures *contentAsQSSServerEndpointFeatures;
@property (copy, nonatomic) QSSClientSetupInfo *contentAsQSSClientSetupInfo;
@property (copy, nonatomic) QSSAudioLimitExceeded *contentAsQSSAudioLimitExceeded;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
