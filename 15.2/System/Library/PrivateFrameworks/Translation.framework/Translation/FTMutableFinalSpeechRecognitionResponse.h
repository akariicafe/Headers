@class FTRecognitionResult, NSString, FTLatnnMitigatorResult, FTAudioAnalytics;

@interface FTMutableFinalSpeechRecognitionResponse : FTFinalSpeechRecognitionResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (nonatomic) long long lang_profile_recreate_codes;
@property (copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property (nonatomic) long long watermark_detection;
@property (nonatomic) double watermark_peak_average;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) NSString *request_locale;
@property (nonatomic) BOOL has_result;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
