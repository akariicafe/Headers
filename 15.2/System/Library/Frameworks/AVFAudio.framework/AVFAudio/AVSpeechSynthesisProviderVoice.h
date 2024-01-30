@class NSString, NSArray;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *supportedLanguages;
@property (nonatomic) long long voiceSize;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long gender;
@property (nonatomic) long long age;

+ (void)initialize;
+ (void)didUpdateSpeechVoices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 supportedLanguages:(id)a2;

@end
