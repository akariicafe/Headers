@interface MCAlwaysOnVPNPayload : MCVPNPayloadBase

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)_validatePayload:(id)a0;

@end
