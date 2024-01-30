@interface FTMutableCheckForSpeechRequest : FTCheckForSpeechRequest

@property (nonatomic) long long start_speech_time;
@property (nonatomic) long long end_speech_time;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
