@interface MFNTLMAuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;

@end
