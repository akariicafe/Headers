@class FTQssAckResponse, FTPartialTextToSpeechStreamingResponse, FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse;

@interface FTMutableTextToSpeechStreamingStreamingResponse : FTTextToSpeechStreamingStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
