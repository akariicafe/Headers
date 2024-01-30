@class AFSpeechRecognition, AFSpeechAudioAnalytics;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFSpeechRecognition *recognition;
@property (readonly, nonatomic) AFSpeechRecognition *rawRecognition;
@property (readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) double utteranceStart;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecognition:(id)a0 rawRecognition:(id)a1 audioAnalytics:(id)a2 isFinal:(BOOL)a3 utteranceStart:(double)a4;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
