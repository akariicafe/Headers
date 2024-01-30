@interface HMBooleanSetting : HMImmutableSetting

@property (readonly) BOOL boolValue;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 boolValue:(BOOL)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
