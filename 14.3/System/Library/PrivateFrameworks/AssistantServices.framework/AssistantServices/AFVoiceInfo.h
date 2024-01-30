@class NSString, NSNumber;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long gender;
@property (readonly, nonatomic) BOOL wasInitalizedFromDictionaryRepresentation;
@property (readonly, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL isCustom;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *contentVersion;
@property (readonly, nonatomic) NSString *masteredVersion;

+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)a0;
+ (long long)genderForVSSpeechGender:(long long)a0;
+ (id)allVoicesForSiriSessionLanguage:(id)a0;
+ (id)voiceInfoForLanguageCode:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLanguageCode:(id)a0;
- (id)genderString;
- (long long)VSSpeechType;
- (id)VSVoiceAsset;
- (long long)VSSpeechGender;
- (long long)VSSpeechFootprint;
- (BOOL)isMatchForVoiceAsset:(id)a0;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 isCustom:(BOOL)a2 name:(id)a3 footprint:(long long)a4 contentVersion:(id)a5 masteredVersion:(id)a6;
- (id)footprintString;
- (id)initWithLanguageCode:(id)a0 gender:(long long)a1 isCustom:(BOOL)a2;
- (BOOL)isLanguageAndGenderEqual:(id)a0;
- (BOOL)isValidForSiriSessionLanguage:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
