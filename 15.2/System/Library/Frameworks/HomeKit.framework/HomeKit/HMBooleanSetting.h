@interface HMBooleanSetting : HMImmutableSetting

@property (readonly) BOOL boolValue;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)settingWithSettingValue:(id)a0;
- (id)settingValue;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 boolValue:(BOOL)a2;

@end
