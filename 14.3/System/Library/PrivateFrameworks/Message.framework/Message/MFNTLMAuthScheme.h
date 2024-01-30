@interface MFNTLMAuthScheme : ECAuthenticationScheme

- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;
- (id)humanReadableName;
- (id)name;

@end
