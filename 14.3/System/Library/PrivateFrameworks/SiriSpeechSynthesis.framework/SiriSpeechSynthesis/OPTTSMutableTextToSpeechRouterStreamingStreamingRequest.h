@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
