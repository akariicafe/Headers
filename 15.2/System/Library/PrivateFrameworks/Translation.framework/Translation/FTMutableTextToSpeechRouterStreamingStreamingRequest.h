@class FTStartTextToSpeechStreamingRequest;

@interface FTMutableTextToSpeechRouterStreamingStreamingRequest : FTTextToSpeechRouterStreamingStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
