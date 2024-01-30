@class HMSettingLanguageValue;

@interface HMLanguageSetting : HMImmutableSetting

@property (readonly) HMSettingLanguageValue *languageValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)settingWithSettingValue:(id)a0;
- (id)settingValue;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 languageValue:(id)a2;

@end
