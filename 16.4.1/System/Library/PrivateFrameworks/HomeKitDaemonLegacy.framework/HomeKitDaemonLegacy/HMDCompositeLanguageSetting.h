@class NSString;

@interface HMDCompositeLanguageSetting : HMDCompositeSetting <HMDCompositeSettingsLanguageValueProviding>

@property (readonly, copy) NSString *inputLanguageCode;
@property (readonly, copy) NSString *outputVoiceLanguageCode;
@property (readonly, copy) NSString *outputVoiceGenderCode;
@property (readonly, copy) NSString *voiceName;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithInputLanguage:(id)a0 outputVoiceLanguageCode:(id)a1 outputVoiceGenderCode:(id)a2 voiceName:(id)a3 readVersion:(id)a4 writeVersion:(id)a5;
- (BOOL)isEqualValue:(id)a0;

@end
