@class NSString, NSAttributedString, AVSpeechSynthesisVoice;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *speechString;
@property (retain, nonatomic) NSAttributedString *attributedSpeechString;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;
@property (nonatomic) float rate;
@property (nonatomic) float pitchMultiplier;
@property (nonatomic) float volume;
@property (nonatomic) BOOL prefersAssistiveTechnologySettings;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic) double postUtteranceDelay;

+ (void)initialize;
+ (id)speechUtteranceWithString:(id)a0;
+ (id)speechUtteranceWithAttributedString:(id)a0;
+ (id)speechUtteranceWithSSMLRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSSMLRepresentation:(id)a0;

@end
