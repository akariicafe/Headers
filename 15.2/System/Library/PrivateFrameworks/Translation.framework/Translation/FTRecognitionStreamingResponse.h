@class NSMutableDictionary, FTRequestStatsResponse, FTEndPointCandidate, FTAudioLimitExceeded, FTRecognitionCandidate, FTRecognitionProgress, FTCheckForSpeechResponse, FTEndPointLikelihood, FTPartialSpeechRecognitionResponse, FTServerEndpointFeatures, FTFinalSpeechRecognitionResponse, FTUpdatedAcousticProfile, FTClientSetupInfo, NSData;

@interface FTRecognitionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTUpdatedAcousticProfile *contentAsFTUpdatedAcousticProfile;
@property (readonly, nonatomic) FTEndPointLikelihood *contentAsFTEndPointLikelihood;
@property (readonly, nonatomic) FTEndPointCandidate *contentAsFTEndPointCandidate;
@property (readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (readonly, nonatomic) FTCheckForSpeechResponse *contentAsFTCheckForSpeechResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1;

@end
