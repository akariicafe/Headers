@interface MFNTLMAuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)hasEncryption;
- (BOOL)sendsPlainTextPasswords;

@end
