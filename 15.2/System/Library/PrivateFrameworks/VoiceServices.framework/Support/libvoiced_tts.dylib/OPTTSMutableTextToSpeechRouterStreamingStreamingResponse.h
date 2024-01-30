@class OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse, OPTTSBeginTextToSpeechStreamingResponse;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
