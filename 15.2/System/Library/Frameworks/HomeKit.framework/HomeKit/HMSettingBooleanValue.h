@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithBoolValue:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;

@end
