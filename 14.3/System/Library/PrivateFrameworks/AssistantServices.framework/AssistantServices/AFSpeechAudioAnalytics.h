@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly, nonatomic) NSDictionary *acousticFeatures;

- (void).cxx_destruct;
- (id)initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
