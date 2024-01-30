@interface ECSMTPAccount : ECAccount

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (id)_hostnameFromParentAccount:(id)a0;
- (long long)defaultPortNumber;
- (id)usesSSLObject;
- (id)portNumberObject;

@end
