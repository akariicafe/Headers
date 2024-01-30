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
- (struct Offset<siri::speech::qss_fb::RecognitionStreamingResponse> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionStreamingResponse { unsigned char x0[1]; } *)a1;

@end
