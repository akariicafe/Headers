@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly, nonatomic) NSDictionary *acousticFeatures;
@property (readonly, nonatomic) double snr;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1;
- (id)initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1 snr:(double)a2;

@end
