@interface IDSPayloadInspector : NSObject

+ (void)inspectPayload:(id)a0 messageGuid:(id)a1;
+ (void)enforceSecurityError:(long long)a0 messageGuid:(id)a1;
+ (long long)validateData:(id)a0 messageGuid:(id)a1;
+ (long long)validateString:(id)a0 messageGuid:(id)a1;

@end
