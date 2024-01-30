@class NSString;

@interface OPTTSMutableFinalTextToSpeechStreamingResponse : OPTTSFinalTextToSpeechStreamingResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int total_pkt_number;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
