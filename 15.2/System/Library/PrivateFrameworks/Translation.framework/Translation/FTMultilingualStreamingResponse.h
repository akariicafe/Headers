@class FTRequestStatsResponse, FTAudioLimitExceeded, NSData, FTRecognitionCandidate, NSMutableDictionary, FTPartialSpeechRecognitionResponse, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse;

@interface FTMultilingualStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultilingualStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property (readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property (readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::MultilingualStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultilingualStreamingResponse { unsigned char x0[1]; } *)a1;

@end
