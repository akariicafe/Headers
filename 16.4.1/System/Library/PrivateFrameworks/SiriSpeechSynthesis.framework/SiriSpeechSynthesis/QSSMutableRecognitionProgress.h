@class NSString;

@interface QSSMutableRecognitionProgress : QSSRecognitionProgress

@property (nonatomic) int processed_audio_duration_ms;
@property (copy, nonatomic) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
