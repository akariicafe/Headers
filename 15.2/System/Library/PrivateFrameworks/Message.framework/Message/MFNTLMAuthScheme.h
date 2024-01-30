@interface MFNTLMAuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;

@end
