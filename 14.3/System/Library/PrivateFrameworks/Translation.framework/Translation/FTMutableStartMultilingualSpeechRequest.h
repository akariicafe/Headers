@class NSArray, FTStartSpeechRequest;

@interface FTMutableStartMultilingualSpeechRequest : FTStartMultilingualSpeechRequest

@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *language_parameters_by_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
