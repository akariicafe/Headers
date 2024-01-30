@class NSString, FTRecognitionResult;

@interface FTMutableCorrectionsValidatorRequest : FTCorrectionsValidatorRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *original_utterance;
@property (copy, nonatomic) NSString *corrected_utterance;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
