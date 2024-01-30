@class NSString;

@interface HMImmutableStringSetting : HMImmutableSetting

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)settingWithSettingValue:(id)a0;
- (id)settingValue;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 stringValue:(id)a2;

@end
