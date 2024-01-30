@class NSString;

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;

@end
