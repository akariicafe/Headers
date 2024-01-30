@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)initWithVersion:(id)a0 type:(long long)a1;

@end
