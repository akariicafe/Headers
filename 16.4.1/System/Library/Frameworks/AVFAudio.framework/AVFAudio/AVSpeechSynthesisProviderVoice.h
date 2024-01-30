@class NSString, NSArray;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSArray *primaryLanguages;
@property (nonatomic) long long voiceSize;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long gender;
@property (nonatomic) long long age;

+ (void)initialize;
+ (void)updateSpeechVoices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1 primaryLanguages:(id)a2 supportedLanguages:(id)a3;

@end
