@class NSString;

@interface HPSSiriLanguageValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDefault) BOOL languageDefault;
@property (readonly, copy, nonatomic) NSString *recognitionLanguage;
@property (readonly, copy, nonatomic) NSString *outputLanguage;
@property (readonly, nonatomic) long long gender;
@property (readonly, copy, nonatomic) NSString *voiceName;

+ (id)languageDefaultWithRecognitionLanguage:(id)a0 outputLanguage:(id)a1 gender:(long long)a2 voiceName:(id)a3;
+ (id)languagesFromVoices:(id)a0 forLanguage:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)alignsWithVoice:(id)a0;
- (id)initWithRecognitionLanguage:(id)a0 outputLanguage:(id)a1 gender:(long long)a2 voiceName:(id)a3;

@end
