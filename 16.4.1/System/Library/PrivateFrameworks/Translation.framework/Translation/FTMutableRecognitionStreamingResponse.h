@class FTRequestStatsResponse, NSObject, FTEndPointCandidate, FTAudioLimitExceeded, FTRecognitionCandidate, FTRecognitionProgress, FTCheckForSpeechResponse, FTEndPointLikelihood, FTPartialSpeechRecognitionResponse, FTServerEndpointFeatures, FTFinalSpeechRecognitionResponse, FTUpdatedAcousticProfile, FTClientSetupInfo;
@protocol FLTBFBufferAccessor, NSCopying;

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
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
