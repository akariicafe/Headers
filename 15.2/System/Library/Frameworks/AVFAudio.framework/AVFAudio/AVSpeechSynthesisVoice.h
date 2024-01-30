@class NSString, NSDictionary;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long quality;
@property (nonatomic) long long gender;
@property (readonly, nonatomic) NSDictionary *audioFileSettings;

+ (void)initialize;
+ (id)voiceWithLanguage:(id)a0;
+ (id)speechVoices;
+ (id)currentLanguageCode;
+ (id)voiceWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
