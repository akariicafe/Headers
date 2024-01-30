@class SiriContextOverride, AFSpeechRequestOptions;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpeechRequestOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContextOverride:(id)a0;

@end
