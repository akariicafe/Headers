@class NSString, AVSpeechSynthesisProviderVoice;

@interface AVSpeechSynthesisProviderRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ssmlRepresentation;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *voice;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSSMLRepresentation:(id)a0 voice:(id)a1;

@end
