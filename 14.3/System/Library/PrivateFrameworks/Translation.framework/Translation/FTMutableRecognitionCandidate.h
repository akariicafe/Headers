@class FTRecognitionResult, NSString, FTLatnnMitigatorResult, FTAudioAnalytics;

@interface FTMutableRecognitionCandidate : FTRecognitionCandidate

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *result_id;
@property (nonatomic) double snr;
@property (nonatomic) long long fingerprint_detection;
@property (copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property (nonatomic) long long watermark_detection;
@property (nonatomic) double watermark_peak_average;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) NSString *request_locale;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
