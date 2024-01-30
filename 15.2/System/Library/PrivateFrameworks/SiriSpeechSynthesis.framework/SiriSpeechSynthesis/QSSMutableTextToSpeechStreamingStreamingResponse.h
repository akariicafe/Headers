@class QSSQssAckResponse, QSSPartialTextToSpeechStreamingResponse, QSSBeginTextToSpeechStreamingResponse, QSSFinalTextToSpeechStreamingResponse;

@interface QSSMutableTextToSpeechStreamingStreamingResponse : QSSTextToSpeechStreamingStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSQssAckResponse *contentAsQSSQssAckResponse;
@property (copy, nonatomic) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
