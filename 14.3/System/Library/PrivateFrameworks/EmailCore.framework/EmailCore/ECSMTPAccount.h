@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)portNumberObject;
- (id)usesSSLObject;
- (id)_hostnameFromParentAccount:(id)a0;
- (long long)defaultPortNumber;

@end
