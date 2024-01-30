@interface ECSMTPAccount : ECAccount

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (long long)defaultPortNumber;
- (id)_hostnameFromParentAccount:(id)a0;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
