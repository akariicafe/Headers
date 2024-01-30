@interface HMBoundedIntegerSetting : HMImmutableSetting

@property (readonly) long long integerValue;
@property (readonly) long long maxValue;
@property (readonly) long long minValue;
@property (readonly) long long valueStepSize;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 integerValue:(long long)a2 maxValue:(long long)a3 minValue:(long long)a4 valueStepSize:(long long)a5;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
